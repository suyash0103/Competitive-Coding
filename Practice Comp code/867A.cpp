#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int count = 0;
	int len = 0;
	for(int i = 0; i < s.length() - 1; i++)
	{
		if(s[i] == 'S' && s[i + 1] == 'F')
			count++;
		else if(s[i] == 'F' && s[i + 1] == 'S')
			count--;
		if(s[i] == 'S')
			len++;
	}
	//if(len == s.length())
	//	printf("YES");
	//else
	//{
		if(count > 0)
			printf("YES");
		else
			printf("NO");	
	//}
	//cout << count;
}
