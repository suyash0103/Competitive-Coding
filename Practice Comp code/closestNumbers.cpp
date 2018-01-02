#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[200001];
ll helper[2000001];

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	ll diff = 0, minDiff = 100000000;
	int j = 0;
	for(int i = 0; i < n - 1; i++)
	{
		diff = abs(a[i] - a[i + 1]);
		if(minDiff > diff)
		{
			minDiff = diff;
			memset(helper, 0, sizeof(helper));
			j = 0;
			helper[j] = a[i];
			j++;
			helper[j] = a[i + 1];
			j++;
		}
		else if(diff == minDiff)
		{
			helper[j] = a[i];
			j++;
			helper[j] = a[i + 1];
			j++;
		}
	}
	for(int i = 0; i < j; i++)
		cout << helper[i] << " ";
}
