#include <bits/stdc++.h>

using namespace std;

int a[1000000];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	stack <int> st;
	int ans = 0, max_ans = 0;
	for(int i = 0; i < n; i++)
	{
		while(!st.empty())
		{
			if(a[i] < st.top())
			{
				int x = st.top();
				st.pop();
				ans = x ^ a[i];
				if(max_ans < ans)
					max_ans = ans;	
			}
			else 
				break;
		}	
		st.push(a[i]);
	}
	printf("%d", max_ans);
}
