#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if(n == 1)
		cout << "a";
	else if(n == 2)
		cout << "ab";
	else if(n == 3)
		cout << "abb";
	else
	{
		string s = "aabb";
		int p = n / 4;
		int q = n % 4;
		for(int i = 1; i <= p; i++)
			cout << s;
		if(q == 1)
			cout << "a";
		else if(q == 2)
			cout << "aa";
		else if(q == 3)
			cout << "aab";
	}
}
