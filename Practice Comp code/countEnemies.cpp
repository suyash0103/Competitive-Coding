#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		int num = 0;
		for(int i = 0; i < s.length(); i++)
			if(s[i] == 'O')
				num++;
		for(int i = 0; i < s.length(); i++)
		{
			//cout << "y";
			int numX = 0, numO = 0;
			while(s[i] != '*' && i < s.length())
			{
				//cout << "Y";
				if(s[i] == 'X')
					numX++;
				else if(s[i] == 'O')
					numO++;
				i++;
			}
			if(numX != 0)
				num -= numO;					
		}
		cout << num << endl;
	}
}
