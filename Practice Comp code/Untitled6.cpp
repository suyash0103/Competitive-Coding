#include<bits/stdc++.h>

using namespace std;

int wrongSolver(std::vector <unsigned int> a) 
{
	int n = a.size();
	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) 
	{
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) 
	{
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) 
	{
		unsigned int val = prefSum[i] + sufSum[i];
		if (val < mn) 
		{
			mn = val;
			where = i + 1;
		}
	}
	return where;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	int n;
	scanf("%d", &n);
	vector <unsigned int> v(n);
	int add = 100000;
//	for(int i = 0; i < n / 2; i++)
//	{
//		v[i] = 100000;
//		//add--;
//	}
//	v[n / 2] = 99999;
//	for(int i = n / 2 + 1; i < n; i++)
//	{
//		v[i] = 100000;
//		//add++;
//	}
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	int ans = wrongSolver(v);
	printf("%d\n", ans);
	}
}
