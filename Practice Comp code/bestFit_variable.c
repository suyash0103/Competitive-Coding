#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data, start, end;
    struct Node *next;
};

void print(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d %d\n", head -> start, head -> end);
        head = head -> next;
    }
}

int best(struct Node **head, int req_size)
{
    int flag = 0;
    struct Node* pointer1 = NULL;
    pointer1 = (struct Node*)malloc(sizeof(struct Node));
    pointer1 = (*head);
    struct Node* temp = NULL;
    temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* pointer2 = NULL;
    pointer2 = (struct Node*)malloc(sizeof(struct Node));
    pointer2 = pointer1 -> next;
    int head_size = (*head) -> end - (*head) -> start;
    if(head_size > req_size)
    {
        temp = (*head);
        flag = 2;
    }
    else if(head_size == req_size)
    {
        (*head) = (*head) -> next;
        return 1;
    }
    else if((*head) -> next == NULL && head_size < req_size)
    {
        return 0;
    }
    while(pointer2 != NULL)
    {
        int avail_size = pointer2 -> end - pointer2 -> start;
        if(avail_size > req_size && avail_size < (temp -> end - temp -> start))
        {
            temp = pointer2;
            flag = 2;
        }
        else if(avail_size == req_size)
        {
            pointer1 -> next = pointer2 -> next;
            flag = 1;
            break;
        }
        pointer1 = pointer2;
        pointer2 = pointer2 -> next;
    }
    if(flag == 1)
        return 1;
    else if(flag == 2)
    {
        temp -> start += req_size;
        return 1;
    }
    return 0;
}

void insert(struct Node **head, struct Node *new_node)
{
    //new_node -> next = (*head);
    //(*head) = new_node;
    struct Node* pointer1 = NULL;
    pointer1 = (struct Node*)malloc(sizeof(struct Node));
    pointer1 = (*head);
    struct Node* pointer2 = NULL;
    pointer2 = (struct Node*)malloc(sizeof(struct Node));
    pointer2 = pointer1 -> next;
    if(new_node -> start < (*head) -> start && new_node -> end  < (*head) -> start)
    {
        new_node -> next = (*head);
        (*head) = new_node;
    }
    else if((*head) -> next == NULL && new_node -> start > (*head) -> end)
    {
        (*head) -> next = new_node;
    }
    else if(new_node -> start < (*head) -> start && new_node -> end  == (*head) -> start)
    {
        (*head) -> start = new_node -> start;
    }
    else if((*head) -> next == NULL && new_node -> start == (*head) -> end)
    {
        (*head) -> end = new_node -> end;
    }
    else if((*head) -> end == new_node -> start)
    {
        (*head) -> end = new_node -> end;
    }
    else
    {
        while(pointer2 != NULL)
        {
            /*if(new_node -> end < pointer2 -> start)
            {
                new_node -> next = pointer2;
                pointer1 -> next = new_node;
                break;
            }*/
            if(new_node -> start < pointer2 -> start && new_node -> end < pointer2 -> start)
            {
                new_node -> next = pointer2;
                pointer1 -> next = new_node;
                break;
            }
            else if(new_node -> start < pointer2 -> start && new_node -> end == pointer2 -> start)
            {
                pointer2 -> start = new_node -> start;
                break;
            }
            else if(new_node -> start == pointer2 -> end)
            {
                pointer2 -> end = new_node -> end;
                break;
            }
            else if(pointer2 -> next == NULL && pointer2 -> end < new_node -> start)
            {
                pointer2 -> next = new_node;
                break;
            }
            pointer1 = pointer2;
            pointer2 = pointer2 -> next;
        }
    }
}

int main()
{
    struct Node* head = NULL;

    head  = (struct Node*)malloc(sizeof(struct Node));

    head -> start = 0;
    head -> end = 1024;
    head -> next = NULL;

    int n, a[1024];  // Taking total available size as 1024
    printf("Enter number of processes:");
    scanf("%d", &n);
    int process[n], i, size[n + 1];
    size[0] = 0;
    printf("Enter size of %d processes:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &process[i]);
        if(head -> start + process[i] <= 1024)
        {
            head -> start += process[i];
        }
        else
        {
            printf("Process %d not allocated any space\n", i + 1);
        }
        size[i + 1] = size[i] + process[i];
    }
    /*for(i = 0; i < n; i++)
    {
        printf("%d %d\n", process[i], size[i]);
    }*/
    print(head);
    printf("Enter number of processes to delete:\n");
    int del;
    scanf("%d", &del);
    printf("Enter process numbers to delete:\n");
    for(i = 0; i < del; i++)
    {
        int x;
        scanf("%d", &x);
        struct Node* new_node = NULL;
        new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node -> start = size[x - 1];
        new_node -> end = new_node -> start + process[x - 1];
        new_node -> next = NULL;
        insert(&head, new_node);
    }
    print(head);
    printf("Enter number of new processes:");
    int n_new;
    scanf("%d", &n_new);
    int process_new[n_new];
    printf("Enter %d new processes:\n", n_new);
    for(i = 0; i < n_new; i++)
    {
        scanf("%d", &process_new[i]);
        if(!best(&head, process_new[i]))
            printf("Memory not allocated\n");
        else
            printf("Memory allocated\n");
    }
    print(head);
}
