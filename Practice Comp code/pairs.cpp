#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000];

int main()
{
	int n;
	ll k;
	scanf("%d%lld", &n, &k);
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	sort(a, a + n);
	ll count = 0;
	for(int i = 0; i < n - 1; i++)
	{
		int key = a[i] + k;
		int low = i + 1, high = n, pos = 0;
		while(low < high)
		{
			int mid = (low + high) / 2;
			if(a[mid] < key)
				low = mid + 1;
			else if(a[mid] > key)
				high = mid;
			else 
			{
				pos = mid;
				break;
			}
		}
		if(pos != 0)
			count++;
	}
	printf("%lld", count);
}
