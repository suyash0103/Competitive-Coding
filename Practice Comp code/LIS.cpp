#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n], l[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int memo[10000];
	memo[0] = 0;
	l[0] = 0;
	vector <int> v;

	int max = 0, pos = -1;
	for(int i = 1; i < n; i++)
	{
		max = 0;
		for(int k = 0; k <= i - 1; k++)
		{
			if(arr[k] < arr[i] && max < memo[k])
			{
				max = memo[k];
				pos = k;
			}
		}
		memo[i] = max + 1;
	}
	max = 0;
	for(int i = 0; i < n; i++)
		if(max < memo[i])
			max = memo[i];
	cout << max;
}