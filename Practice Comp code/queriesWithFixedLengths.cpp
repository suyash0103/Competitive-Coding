#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i <= q; i++)
	{
		int x;
		scanf("%d", &x);
		stack <int> st;
		int min, minFinal;
		for(int j = 0; j < n - x + 1; j++)
		{
			st.push(a[j]);
			for(int k = j + 1; k < j + x; k++)
			{
				if(a[k] > st.top())
				{
					st.pop();
					st.push(a[k]);
				}
			}
		}
		minFinal = st.top();
		while(!st.empty())
		{
			min = st.top();
			st.pop();
			if(min < minFinal)
				minFinal = min;
		}
		printf("%d\n", minFinal);
	}
}
