#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector <int> a(n);
	vector <int> b(n);
	int max = 0;
	for(int i = 0; i <n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
		if(max < b[i])
			max = b[i];	
	}		
	stack <int> st;
	st.push(max);
	b.erase(remove(b.begin(), b.end(), max), b.end());
	while(!b.empty())
	{
		sort(b.rbegin(), b.rend());
		st.push(b[0]);
		b.erase(remove(b.begin(), b.end(), b[0]), b.end());
	}
	
}
