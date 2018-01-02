#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int left, right;
		int l = s.length();
		left = 0;
		right = l - 1;
		int majFlag = 0;
		for(int k = 1; k <= l; k++)
		{
			int flag = 0;
			if(k == 1)
				right = l - 2;
			else
				right = l - 1;
			for(int i = 0; i < l; i++)
			{
				if((k - 1) > right)
					break;
				if(s[k - 1] == s[right] && (k - 1) != right)
				{
					flag = 1;
					break;
				}
				else
					right--;
			}
			if(flag == 1)
			{
				majFlag = 1;
				printf("yes\n");
				break;
			} 	
		}
		if(majFlag == 0)
			printf("no\n");
	}
}
