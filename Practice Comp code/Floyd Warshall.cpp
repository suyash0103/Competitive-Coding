#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter number of vertices:";
	cin >> n;
	int d[n][n], pi[n][n];
	cout << "Enter number of edges:";
	int edges;
	cin >> edges;
	vector <pair<int, int> > vec[n];

	for(int i = 0; i < edges; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		vec[u].push_back(make_pair(v, w));
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int flag = 0;
			if(i == j)
				d[i][j] = 0;
			else
			{
				for(int k = 0; k < vec[i].size(); k++)
				{
					if(vec[i][k].first == j)
					{
						d[i][j] = vec[i][k].second;
						// pi[i][j] = 
						flag = 1;
						break;
					}
				}
				if(flag == 0)
					d[i][j] = 1000000;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << d[i][j] << " ";
		cout << endl;
	}

	cout << endl << endl << endl;

	for(int k = 1; k < n; k++)
	{
		int f1[n][n];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				f1[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				d[i][j] = f1[i][j];
				cout << d[i][j] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << endl << endl << endl;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << d[i][j] << " ";
		cout << endl;
	}
}