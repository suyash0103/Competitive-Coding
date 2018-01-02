#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	scanf("%d", &n);
	int count = 0, j;
	for(int l = 0; l < n; l++)
	{
		char a;
		scanf("%c", &a);
		for(int k = 1; k <= n; k++)
		{
			for(int i = 0; i < n - k + 1; i++)
			{
				j = i + k - 1;
				for(int m = i; m <= j; m++)
				{
					if(s[m] == a)
					{
						count++;
						break;
					}
				}
			}
		}
		printf("%d", count);
		count = 0;
	}
}
