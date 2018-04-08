#include<bits/stdc++.h>

using namespace std;

bool sum(int n, int a[], int summ)
{
	if(n == 0 && summ != 0)
		return false;
	if(summ == 0)
		return true;
	
	if(a[n - 1] > summ)
		return sum(n - 1, a, summ);
	
	return sum(n - 1, a, summ) || sum(n - 1, a, summ - a[n - 1]);
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	cin >> a[i];
	int summ;
	cin >> summ;
	bool ans = sum(n, a, summ);
	cout << ans;
}
