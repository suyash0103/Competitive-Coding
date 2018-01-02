#include<bits/stdc++.h>

using namespace std;

int main() 
{
    queue <int> q;
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int query;
        scanf("%d", &query);
        if(query == 1)
        {
            int num;
            scanf("%d", &num);
            q.push(num);
        }
        else if(query == 2)
        {
            if(!q.empty())
                q.pop();
        }
        else
        {
            int ans = q.front();
            printf("%d\n", ans);
        }
    }
    return 0;
}
