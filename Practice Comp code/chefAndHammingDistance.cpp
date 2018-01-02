#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a[100005];
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		if(n % 2 == 0)
		{
			int count = 0, flag = 0;
			for(int i = 0; i < n - 1; i++)
			{
				if(n == 2 && a[i] == a[i + 1])
				{
					//cout << "1" << endl;
					printf("0\n");
					printf("%d %d\n", a[0], a[1]);
					flag = 1;
					break;
				}
				else if(a[i] == a[i + 1] && (i + 3) < n)
				{
					//cout << "2" << endl;
					swap(a[i], a[i + 2]);
					swap(a[i + 1], a[i + 3]);
					i = i + 3;
					count += 4;
				}
				else if(a[i] == a[i + 1] && (i + 3) >= n)
				{
					//cout << "3" << endl;
					swap(a[i], a[i - 1]);
					swap(a[i + 1], a[i - 2]);
					i = i + 1;
					count += 2;
				}
				else
				{
					//cout << "4" << endl;
					swap(a[i], a[i + 1]);
					i = i + 1;
					count += 2;
				}
			}
			if(flag == 0)
			{
				printf("%d\n", count);
				for(int i = 0; i < n; i++)
					printf("%d ", a[i]);
				printf("\n");
			}
		}
		else
		{
			int n1 = n - 1;
			int key = a[n1], pos = -1, flag2 = 0;
			for(int j = 0; j < n - 1; j++)
			{
				if(a[j] == key)
				{
					pos = j;
					flag2 = 1;
					break;
				}
			}
			int count = 0, flag = 0;
			if(n == 1)
			{
				//cout << "1" << endl;
				printf("0\n");
				printf("%d\n", a[0]);
				flag = 1;
			}
			for(int i = 0; i < n1 - 1; i++)
			{
				if(n == 3)
				{
					if(a[0] != a[1] && a[1] != a[2] && a[0] != a[2])
					{
						printf("3\n%d %d %d\n", a[1], a[2], a[0]);
					}
					else if(a[0] == a[1])
					{
						printf("2\n%d %d %d\n", a[2], a[1], a[0]);
					}
					else if(a[1] == a[2])
					{
						printf("2\n%d %d %d\n", a[1], a[0], a[2]);
					}
					else if(a[0] == a[2])
					{
						printf("2\n%d %d %d\n", a[1], a[0], a[2]);
					}
					flag = 1;
					break;
				}
				else if(a[i] == a[i + 1] && (i + 3) < n1)
				{
					//cout << "2" << endl;
					swap(a[i], a[i + 2]);
					swap(a[i + 1], a[i + 3]);
					i = i + 3;
					count += 4;
				}
				else if(a[i] == a[i + 1] && (i + 3) >= n1)
				{
					//cout << "3" << endl;
					swap(a[i], a[i - 1]);
					swap(a[i + 1], a[i - 2]);
					i = i + 1;
					count += 2;
				}
				else
				{
					//cout << "4" << endl;
					swap(a[i], a[i + 1]);
					i = i + 1;
					count += 2;
				}
			}
			if(flag == 0)
			{
				if(a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
				{
					swap(a[n - 1], a[n - 2]);
					count++;
				}
				else
				{
					if(flag2 == 0)
					{
						swap(a[n - 1], a[n - 4]);
						count++;
					}
					else
					{
						if(pos != n - 4)
						{
							swap(a[n - 1], a[n - 4]);
							count++;
						}
						else
						{
							swap(a[n - 1], a[n - 5]);
							count++;
						}
					}
				}
				printf("%d\n", count);
				for(int i = 0; i < n; i++)
					printf("%d ", a[i]);
				printf("\n");
			}
		}
	}
}
