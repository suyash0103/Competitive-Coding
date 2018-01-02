#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000], b[100000];

int main()
{
	int n;
	ll d;
	scanf("%d%lld", &n, &d);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	for(int i = 0; i < n; i++)
		scanf("%lld", &b[i]);
	ll diff = 0;
	for(int i = 0; i < n; i++)
	{
		int ans = b[i] + d;
		int low = 0, high = n; 
		while (low != high) 
		{
    		int mid = (low + high) / 2; 
    		if (a[mid] <= ans) 
			{
        		low = mid + 1;
    		}
    		else 
			{
        		high = mid;
    		}
		}
		diff = diff + n - low;
	}
	printf("%lld", diff);
}
