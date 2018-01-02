#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = s.length();
	char s1[100000];
	int n;
	//printf("b\n");
	scanf("%d", &n);
	int count = 0, j, pos = 0;
	for(int l = 0; l < n; l++)
	{
		char c;
		cin >> c;
		s1[l] = c;
		//printf("b\n");
	}
	//cout << s1;
	int flag = 0, finalCount = 0;
	int dummy = n;
	for(int length = n; length <= x; length++)
	{
		if(dummy == 1)
		{
			for(int y = 0; y < x; y++)
				if(s[y] == s1[0])
					finalCount++;
			dummy++;
		}
		for(int i = 0; i < length - n + 1; i++)
		{
			j = i + length - 1;
			for(int k = i; k <= j; k++)
			{
				if(s1[pos] == s[k] && pos < n)
				{
					count++;
					pos++;
				}
			}
		}
		if(count == n)
			finalCount++;
		count = 0;
		pos = 0;
	}
	printf("%d\n", finalCount);
}
