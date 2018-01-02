#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int a[N];
	for(int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	int Q, X;
	scanf("%d%d", &Q, &X);
	int count = 0;
	int sum = 0;
	int j = 0;
	stack <int> st;
	while(Q--)
	{
		string s;
		cin >> s;
		if(s[0] == 'H')
		{
			if(sum + a[j] < X)
			{
				sum = sum + a[j];
				count++;
				st.push(a[j]);
				j++;
			}
			else
			{
				sum = sum + a[j];
				st.push(a[j]);
				j++;	
			}
		}
		else
		{
			int x = st.top();
			sum = sum - x;
			st.pop();
		}
	}
}
