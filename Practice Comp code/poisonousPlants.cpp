#include<bits/stdc++.h>

using namespace std;

vector <int> a(100000);
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	stack <int> st;
	int count = 0;
	while(1)
	{
		count++;
		for(int i = 0; i < n - 1; i++)
		{
			if(a[i] < a[i + 1])
				st.push(i + 2);
		}
		if(!st.empty())
		{
			while(!st.empty())
			{
				int x = st.top();
				st.pop();
				a.erase(a.begin() + x - 1);	
			}
		}
		else
			break;
	}
	printf("%d", count - 1);
}
