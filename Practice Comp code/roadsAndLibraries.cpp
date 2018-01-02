#include <bits/stdc++.h>

using namespace std;

vector <int> vec[100000];

bool visited[100000];

int arr[100000];

void dfs(int s, int count, int l) 
{
    visited[s] = true;
    for(int i = 0; i < vec[s].size(); i++)    
	{
    	if(visited[vec[s][i]] == false)
        {
        	count++;
        	dfs(vec[s][i], count, l);
		}
    }
    arr[l] = count;
}

void initialise()
{
	for(int i = 0; i < 100000; i++)
		visited[i] = false;
}

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int n, m, Clib, Croad;
		scanf("%d%d%d%d", &n, &m, &Clib, &Croad);
		for(int j = 0; j < m; j++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		initialise();
		int l = 0;
		if(Clib < Croad)
			printf("%d", n * Clib);
		else
		{
			for(int k = 1; k <= n; k++) 
			{
				if(visited[k] == false)
				{
					dfs(k, 0, l);
					l++;
				} 
    		}
    		int ans = 0;
    		for(int x = 0; x < l; x++)
    		{
    			ans = ans + (arr[x] - 1) * Croad + Clib;
			}
			printf("%d\n", ans);
		}
	}
}
