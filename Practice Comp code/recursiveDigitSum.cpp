#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int k;
	cin >> s >> k;
	string s1 = s;
	//for(int i = 0; i < k - 1; i++)
	//	s = s + s1;
	//cout << s;
	long long int sum = 0;
	for(int i = 0; i < s.length(); i++)
		sum = sum + int(s[i]) - '0';
	sum = sum * k;
	long long int x = sum;
	long long int count = 0;
	while(sum / 10 != 0)
	{
		count = 0;
		x = sum;
		while(x > 0)
		{
			count = count + x % 10;
			x = x / 10;	
		}
		sum = count;
	}
	printf("%lld", sum);
}
