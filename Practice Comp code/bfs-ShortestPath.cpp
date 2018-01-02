#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		vector <int> vec[1000];
		int n, m;
		scanf("%d%d", &n, &m);
		for(int j = 0; j < m; j++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		int start_point, flag = 0, check = 0;
		scanf("%d", &start_point);
		for(int j = 1; j <= n; j++)
		{
			for(int k = 0; k < vec[start_point].size(); k++)
			{
				if(j == start_point)
				{
					check = 0;
					break;	
				}
				else
				{
					if(vec[start_point][k] == j)
					{
						flag = 1;
						check = 1;
						break;
					}
					check = 1;	
				}
			}
			if(check == 1)
			{
				if(flag == 1)
					printf("6 ");
				else
					printf("-1 ");	
			}
			check = 0;
			flag = 0;
		}
		printf("\n");
	}
}
