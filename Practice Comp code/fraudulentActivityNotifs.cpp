#include <bits/stdc++.h>

using namespace std;

vector <int> a(200000);
vector <int> copy(200000);

int main()
{
	vector <int> :: iterator first, last;
	int n, d;
	cin >> n >> d;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int count = 0;
	//fill(copy.begin(), copy.end(), 0);
	for(int i = 0; i < n; i++)
	{
		if(i < d)
			continue;
		int x = i - d;
		first = a.begin() + x;
		last = first + d;
		vector <int> copy(first, last);
		sort(copy.begin(), copy.end());
		if(copy.size() % 2 == 1)
		{
			int mid = copy.size() / 2;
			int median = copy[mid];
			if(a[i] >= median * 2)
				count++;
			//cout << median << " ";
		}
		else
		{
			int mid = copy.size() / 2;
			int median = (copy[mid - 1] + copy[mid]) / 2;
			if(a[i] >= median * 2)
				count++;
			//cout << median << " ";
		}
		fill(copy.begin(), copy.end(), 0);
		//for(i = 0; i < d; i++)
		//	cout << copy[i] << " ";
	}
	cout << count;
}
