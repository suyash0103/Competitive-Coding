#include<bits/stdc++.h>

using namespace std;

int n, e;
vector <pair <int, pair <int, int> > > graph[100];
vector <pair <int, pair <int, int> > > p_queue;
int visited[100];
multimap <int, pair<int, int> > mp;

void initialize()
{
	for(int i = 0; i < n; i++)
		visited[i] = 0;
}

void prim(int current)
{
	if(p_queue.size() > 0)
	{
		vector <pair <int, pair <int, int> > > :: iterator it, itp;
		it = graph[current].begin();
		if(visited[it -> second.second] == 1)
		{
			p_queue.erase(p_queue.begin(), p_queue.begin() + 1);
			prim(current);
		}
		visited[current] = 1;
		advance(it, current - 1);
		for(it = graph[current].begin(); it != graph[current].end(); it++)
		{
			if(visited[it -> second.second] == 0)
			{
//				cout << "in if";
				p_queue.push_back(make_pair(it -> first, make_pair(current, it -> second.second)));
			}
		}
		sort(p_queue.begin(), p_queue.end());
		itp = p_queue.begin();
		int to_pass = itp -> second.second;
		mp.insert(make_pair(itp -> first, make_pair(itp -> second.first, itp -> second.second)));
		p_queue.erase(p_queue.begin(), p_queue.begin() + 1);
		prim(to_pass);	
	}
	return;
}

int main()
{
	printf("Enter number of vertices:");
	scanf("%d", &n);
	initialize();
	printf("Enter number of edges:");
	scanf("%d", &e);
	printf("Enter edges with weights:");
	for(int i = 0; i < e; i++)
	{
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
//		mp.insert(make_pair(w, make_pair(u, v)));
		graph[u].push_back(make_pair(w, make_pair(u, v)));
		graph[v].push_back(make_pair(w, make_pair(u, v)));
	}
	multimap <int, pair<int, int> > :: iterator itm;
	int start;
	printf("Enter start vertex:");
	scanf("%d", &start);
	visited[start] = 1;
	vector <pair <int, pair <int, int> > > :: iterator it, itp;
	it = graph[start].begin();
//	cout << it -> first << "   " << it -> second.first << "   " <<  it -> second.second << endl;
	advance(it, start - 1);
//	cout << "H";
	for(it = graph[start].begin(); it != graph[start].end(); it++)
	{
		if(visited[it -> second.second] == 0)
		{
//			cout << "in if";
			p_queue.push_back(make_pair(it -> first, make_pair(start, it -> second.second)));
		}
	}
	sort(p_queue.begin(), p_queue.end());
	itp = p_queue.begin();
	int to_pass = itp -> second.second;
	mp.insert(make_pair(itp -> first, make_pair(itp -> second.first, itp -> second.second)));
	p_queue.erase(p_queue.begin(), p_queue.begin() + 1);
//	cout << "g";
	prim(to_pass);
	for(itm = mp.begin(); itm != mp.end(); itm++)
		printf("%d %d %d\n", itm -> first, itm -> second.first, itm -> second.second);
}

