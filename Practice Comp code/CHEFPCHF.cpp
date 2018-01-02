#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int s[100000];

int isPalin(int s[], int start, int end)
{
	int flag = 0;
	//for(int i)
	while(start < end)
	{
		if(s[start] != s[end - 1])
		{
			flag = 1;
			break;
		}
		start++;
		end--;
	}
	if(flag == 1)
		return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(s, 0, sizeof(s));
		int n, k;
		scanf("%d%d", &n, &k);
		for(int i = 0; i < k; i++)
		{
			int u, v;
			scanf("%d%d", &u, &v); 
			s[u - 1] = v;
		}
		int count = n;
		for(int i = 3; i <= n; i += 2)
		{
			for(int j = 0; j <= n - i; j++)
			{
				int x = isPalin(s, j, i + j);
				if(x)
					count++;	
			}
		}
		printf("%d\n", count);
	}
}
