#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.length();
	int l2 = s2.length();
	int a[26], b[26];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for(int i = 0; i < l1; i++)
		a[int(s1[i]) - 97]++;
	for(int i = 0; i < l2; i++)
		b[int(s2[i]) - 97]++;
	int i = 0, j = 0;
	int count = 0;
	while(i < 26)
	{
		//cout << a[i] << " " << b[i] << endl;
		count = count + abs(a[i] - b[i]);
		i++;
	}
	cout << count;
}
