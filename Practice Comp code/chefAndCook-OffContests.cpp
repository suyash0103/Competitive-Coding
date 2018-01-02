#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int a[5];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		int n;
		scanf("%d", &n);
		//vector <string> vec(n);
		for(int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			if(s == "cakewalk")
				a[0]++;
			else if(s == "simple")
				a[1]++;
			else if(s == "easy")
				a[2]++;
			else if(s == "easy-medium" || s == "medium")
				a[3]++;
			else if(s == "medium-hard" || s == "hard")
				a[4]++;
			//vec[i].push_back(s);
		}
		int flag = 0;
		for(int i = 0; i < 5; i++)
		{
			if(a[i] == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			printf("No\n");
		else
			printf("Yes\n");
	}	
}

