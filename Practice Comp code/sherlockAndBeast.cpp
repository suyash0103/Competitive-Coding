#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int no_of_five = 0, no_of_three = 0;
		int k = n;
		int flag = 0;
		while(k >= 0)
		{
			if(k % 3 == 0 && (n - k) % 5 == 0)
			{
				flag = 1;
				no_of_five = k;
				no_of_three = n - k;
				break;
			}
			else
			{
				k--;
			}
		}
		if(flag == 1)
		{
			while(no_of_five)
			{
				cout << 5;
				no_of_five--;
			}
			while(no_of_three)
			{
				cout << 3;
				no_of_three--;
			}
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
}
