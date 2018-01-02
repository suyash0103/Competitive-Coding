#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll F[5000];
ll val[5000];
int visited[5000];
int dist[5000];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		for(int i = 0; i < 5000; i++)
		{
			F[i] = 0;
			val[i] = 0;
			visited[i] = 0;
			dist[i] = 0;
		}
		vector <int> vec[3000];
		int n, q;
		scanf("%d%d", &n, &q);
		for(int i = 1; i <= n - 1; i++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		} 
		for(int i = 1; i <= q; i++)
		{
			int type;
			scanf("%d", &type);
			if(type == 1)
			{
				for(int i = 0; i < 3005; i++)
				{
			        //val[i] = 0;
					visited[i] = 0;
					F[i] = 0;
					dist[i] = 0;
				}
				//cout << "In type 1" << endl;
				int v, k;
				ll a, b;
				scanf("%d %d %lld %lld", &v, &k, &a, &b);
				//cout << "In type 1" << endl;
//				cin >> v >> k >> a >> b;
				F[0] = a;
				F[1] = b;
				for(int j = 2; j <= 3000; j++)
				{
					F[j] = F[j - 1] + F[j - 2];
				}
//				cout << "In type 1" << endl;
				//int distance = 1;
				queue <int> qu;
				qu.push(v);
				val[v] += F[0];
				dist[v] = 0;
				//cout << "In type 1" << endl;
				//cout << vec[v].size() << endl;
				while(!qu.empty())
				{
//					cout << "in while";
					int x = qu.front();
					qu.pop();
					for(int l = 0; l < vec[x].size(); l++)
					{
						if(visited[vec[x][l]] == 0)
						{
							qu.push(vec[x][l]);
							dist[vec[x][l]] = dist[x] + 1;
							//val[vec[x][l]] = distance;
							if(dist[vec[x][l]] <= k)
							{
								val[vec[x][l]] += F[dist[vec[x][l]]];
							}
							visited[vec[x][l]] = 1;
						}
					}
					//distance++;
				}
			}
			else
			{
				//cout << "In type 2" << endl;
				int v;
				scanf("%d", &v);
				ll ans = val[v] % 1000000007;
				printf("%lld\n", ans % 1000000007);
			}
		}
	}
}
