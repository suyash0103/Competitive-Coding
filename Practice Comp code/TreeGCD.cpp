#include<bits/stdc++.h>

using namespace std;

vector <int> vec[100000];
int a[100000];
int answer[100000];

typedef long long int ll;

int gcd(int x, int y)
{
	if(x == 0)
		return y;
	return gcd(y % x, x);
}

int main()
{
	int t, ans;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int nodes, count = 0, pos = 0;
		scanf("%d", &nodes);
		for(int j = 0; j < nodes - 1; j++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			vec[u].push_back(v);
		}
		for(int j = 0; j < nodes; j++)
			scanf("%d", &a[j]);
		for(int j = 1; j <= nodes; j++)
		{
			for(int k = 0; k < vec[j].size(); k++)
			{
				ans = gcd(a[j - 1], a[vec[j][k] - 1]);
				if(ans > 1)
					count++;
			}
			answer[pos] = count;
			count = 0;
			pos++;
		}
		for(int j = 0; j < pos; j++)
			printf("%d ", answer[j]);
		printf("\n");
	}
}
 
