#include<bits/stdc++.h>

using namespace std;

int a[10000];
bool vis[10000];

int main()
{
	memset(vis, false, 10000);
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int count = 0, flag = 0, j, loc = 0;
	for(int i = 0; i < n; i++)
	{
		count++;
		j = i + k - 1;
		
		if(j >= n)
			j = n - 1;
		
		while(loc <= j && j < n && a[j] == 0)
			j--;
		
		if(j < loc)
		{
			printf("-1");
			flag = 1;
			break;
		}
		
		else
		{
			loc = j + 1;
			j = j + k;
			i = j;
		}
	}
	if(flag == 0)
		printf("%d", count);
}

/* 1.Trans denote the no. of towers required. 
2. I move from the 1 city and skip k-1 cities(variable j) in between and try to locate tower over there,
if not possible then i check iteratively(while loop) to find a city where tower can be located till the city 
where i installed the last tower(variable loc). 
3. Assume i locate a tower at city i then i skip next k cities, and start similarly like I have done from city 1.*/


