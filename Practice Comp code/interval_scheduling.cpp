#include<bits/stdc++.h>

using namespace std;

int n;

class greedy
{
public:
	int start;
	int end;
	int visited;
};

int main()
{
	printf("Enter number of intervals:");
	scanf("%d", &n);
	greedy g[n];
	printf("Enter start and end times of intervals:\n");
	for(int i = 0; i < n; i++)
	{
		int start, end;
		scanf("%d%d", &start, &end);
		g[i].start = start;
		g[i].end = end;
		g[i].visited = 0;
	}
	int j, key, key1;
	for(int i = 1; i < n; i++)
	{
		greedy g1 = g[i];
		key = g[i].end;
		key1 = g[i].start;
       	j = i - 1;
       	while(j >= 0 && g[j].end >= key)
       	{
       		g[j + 1] = g[j];
           	j = j - 1;
       	}
       	g[j + 1].end = key;
       	g[j + 1].start = g1.start; 
	}
	// for(int i = 0; i < n; i++)
	// 	printf("%d  %d\n", g[i].start, g[i].end);
	
	printf("%d %d\n", g[0].start, g[0].end);
	int time = g[0].end;

	for(int i = 1; i < n; i++)
	{
		if(g[i].start < time)
			continue;
		else
		{
			printf("%d %d\n", g[i].start, g[i].end);
			time = g[i].end;
		}
	}
}
