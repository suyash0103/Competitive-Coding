#include<bits/stdc++.h>

using namespace std;

vector <int> vec[2005];
int visited[2005];
int level[2005];

void initial()
{
	for(int i = 0; i < 2005; i++)
	{
		visited[i] = 0;
		level[i] = 0;
		vec[i].push_back(0);
	}
}

int bfs(int start_point, vector <int> vec[], int n)
{
	queue <int> q;
	//cout << q.front() << endl;
	q.push(start_point);
	//cout << q.front() << endl;
	//cout << start_point << endl;
//	for(int i = 0; i < 2005; i++)
//	{
//		visited[i] = 0;
//		level[i] = 0;
//		//vec[i].push_back(0);
//	}
	level[start_point] = 0;
	visited[start_point] = 1;
	//cout << vec[2][0];
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		//cout << vec[p].size() << endl;
		for(int i = 0; i < vec[p].size(); i++)
		{
			if(visited[ vec[ p ][ i ] ] == 0)
			{
				level[ vec[ p ][ i ] ] = level[ p ] + 1; 
				cout << level[ p ] << " " << level[ vec[ p ][ i ] ] << endl;
                q.push(vec[ p ][ i ]);
                visited[ vec[ p ][ i ] ] = 1;
			}
		}
	}
	//level[1] = 0;
	//cout << level[1] << endl;
	for(int i = 1; i <= n; i++)
	{
		if(i == start_point)
			continue;
		int x = level[i];
		//cout << x;
		if(x != 0)
			printf("%d ", x * 6);
		else
			printf("-1 ");
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		initial();
		int m, n;
		scanf("%d%d", &n, &m);
		for(int i = 0; i < m; i++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
//		for(int i = 0; i < n; i++)
//		{
//			//for(int j = 0; j < vec[i].size(); j++)
//			//	cout << vec[i][j] << endl;
//			cout << vec[i].size();
//		}
		int start_point;
		scanf("%d", &start_point);
		bfs(start_point, vec, n);
		printf("\n");
		initial();
		//cout << level[1] << " ";
	}
}
