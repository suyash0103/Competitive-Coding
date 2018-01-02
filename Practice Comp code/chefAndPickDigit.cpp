#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[1000005];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		ll len = s.length();
		for(ll j = 0; j < len; j++)
		{
			a[j] = s[j];
			a[j] = a[j] - 48;
		}
		sort(a, a + len);
		for(ll j = 0; j < len; j++)
		{
			if(a[j] == 6 && a[j - 1] != 6)
			{
				for(ll k = j - 1; k < len; k++)
				{
					if(a[k] == 5)
						cout << 'A';
					else if(a[k] == 6 && j == k - 1)
						cout << 'B';
					else if(a[k] == 7 && a[k - 1] != 7)
						cout << 'C';
					else if(a[k] == 8 && a[k - 1] != 8)
						cout << 'D';
					else if(a[k] == 9 && a[k - 1] != 9)
						cout << 'E';
				}
			}
			else if(a[j] == 7 && a[j - 1] != 7)
			{
				for(ll k = 0; k < len; k++)
				{
					if(a[k] == 0 && k == 0)
						cout << 'F';
					else if(a[k] == 1 && a[k - 1] != 1)
						cout << 'G';
					else if(a[k] == 2 && a[k - 1] != 2)
						cout << 'H';
					else if(a[k] == 3 && a[k - 1] != 3)
						cout << 'I';
					else if(a[k] == 4 && a[k - 1] != 4)
						cout << 'J';
					else if(a[k] == 5 && a[k - 1] != 5)
						cout << 'K';
					else if(a[k] == 6 && a[k - 1] != 6)
						cout << 'L';
					else if(a[k] == 7 && j == k - 1)
						cout << 'M';
					else if(a[k] == 8 && a[k - 1] != 8)
						cout << 'N';
					else if(a[k] == 9 && a[k - 1] != 9)
						cout << 'O';
				}
			}
			else if(a[j] == 8 && a[j - 1] != 8)
			{
				for(ll k = 0; k < len; k++)
				{
					if(a[k] == 0 && k == 0)
						cout << 'P';
					else if(a[k] == 1 && a[k - 1] != 1)
						cout << 'Q';
					else if(a[k] == 2 && a[k - 1] != 2)
						cout << 'R';
					else if(a[k] == 3 && a[k - 1] != 3)
						cout << 'S';
					else if(a[k] == 4 && a[k - 1] != 4)
						cout << 'T';
					else if(a[k] == 5 && a[k - 1] != 5)
						cout << 'U';
					else if(a[k] == 6 && a[k - 1] != 6)
						cout << 'V';
					else if(a[k] == 7 && a[k - 1] != 7)
						cout << 'W';
					else if(a[k] == 8 && j == k - 1)
						cout << 'X';
					else if(a[k] == 9 && a[k - 1] != 9)
						cout << 'Y';
				}
			}
			else if(a[j] == 9 && a[j - 1] != 9)
			{
				if(a[0] == 0)
					printf("Z");
			}
		}
		printf("\n");
	}
}
