#include<bits/stdc++.h>

using namespace std;

int n;

class greedy
{
public:
	int start;
	int end;
	int visited;
	bool operator< (const greedy &other) const {
        return end < other.end;
    }
};

int main()
{
	printf("Enter number of intervals:");
	scanf("%d", &n);
	vector <greedy> g;
	vector <int> index;
	printf("Enter start and end times of intervals:\n");
	for(int i = 0; i < n; i++)
	{
		greedy obj;
		int start, end;
		scanf("%d%d", &start, &end);
		obj.start = start;
		obj.end = end;
		obj.visited = 0;
		g.push_back(obj);
	}
	
	sort(g.begin(), g.end());
	for(int i = 0; i < n; i++)
		printf("%d  %d\n", g[i].start, g[i].end);

	vector <greedy> :: iterator it;

	int res = 1;

	while(!g.empty())
	{
		printf("Resource : %d\n", res);
		printf("%d %d\n", g[0].start, g[0].end);
		g.erase(g.begin() + 0);
		int time = g[0].end;
		for(it = g.begin(); it != g.end(); it++)
		{
			int i = distance(g.begin(), it);
			cout << "I : " << i << endl;
			if(g[i].start <= time)
				continue;
			else
			{
				printf("%d %d\n", g[i].start, g[i].end);
				time = g[i].end;
				// g.erase(g.begin() + i - 1);
				index.push_back(i + 1);
				// cout << "I is :" <<  i << endl;
				// it = std :: prev(it, 1);
			}
		}
	
		for(int j = 0; j < index.size(); j++)
		{
			g.erase(g.begin() + index[j]);
			// cout << "H\n";
		}

		cout << "G" << endl;
		for(int i = 0; i < g.size(); i++)
		{
			cout << g[i].start << " " << g[i].end << endl;
		}
		// // cout << "g";
		index.clear();
		res++;
	}

	// printf("%d %d\n", g[0].start, g[0].end);
	// int time = g[0].end;

	// for(int i = 1; i < n; i++)
	// {
	// 	if(g[i].start <= time)
	// 		continue;
	// 	else
	// 	{
	// 		printf("%d %d\n", g[i].start, g[i].end);
	// 		time = g[i].end;
	// 	}
	// }
}
