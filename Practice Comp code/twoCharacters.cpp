#include<bits/stdc++.h>

using namespace std;

int a[30];

int check(char s[])
{
	int l = strlen(s);
	int flag = 0;
	for(int i = 0; i < l - 1; i++)
	{
		if(s[i] == s[i + 1])
		{
			//cout << "found" << endl;
			flag = 1;
			break;
		}
	}
	//cout << l << endl;
	//cout << flag << endl;
	if(flag == 1)
		return 0;
	else
		return l;
}

int main()
{
	memset(a, 0, sizeof(a));
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	for(int i = 0; i < n; i++)
	{
		a[s[i] - 97]++;
		//cout << a[s[i] - 97] << " ";
	}
	//for(int i = 0; i < 26; i++)
	//	cout << a[i] << " ";
	char s1[100000];
	int pos = 0, main_pos = 0;
	int c[100000];
	int str_num = 0;
	for(int i = 0; i < 25; i++)
	{
		if(a[i] == 0)
			continue;
		for(int j = i + 1; j < 26; j++)
		{
			s1[0] = '\0';
			//cout << s1 << endl;
			pos = 0;
			if(a[j] == 0)
				continue;
			for(int k = 0; k < n; k++)
			{
				if(int(s[k]) == i + 97 || int(s[k]) == j + 97)
				{
					//cout << int(s[k]) <<  " " << endl;
					s1[pos] = s[k];
					//cout << s1[pos] << endl;
					pos++;
				}
				//cout << s1 << endl;
			}
			s1[pos] = '\0';
			//cout << s1 << endl;
			int x = check(s1);
			if(x > 0)
			{
				c[main_pos] = x;
				main_pos++;
			}
			str_num++;
		}
	}
	int max = 0;
	for(int i = 0; i < main_pos; i++)
	{
		if(max < c[i])
			max = c[i];
	}
	printf("%d", max);
}
