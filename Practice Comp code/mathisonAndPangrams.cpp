#include<bits/stdc++.h>

using namespace std;

long long int a[27];

int main()
{
	int t;
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		for(int j = 0; j < 26; j++)
			scanf("%d", &a[j]);
		char s[50000];
		cin >> s;
		int len = strlen(s);
		sort(s, s + len);
		long long int cost = 0;
		int flag = 1;
		for(int j = 0; j < 26; j++)
		{
			for(int k = 0; k < len; k++)
			{
				if(s[k] == alpha[j])
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				cost = cost + a[j];
			flag = 1;
		}
		printf("%lld\n", cost);
	}
}
