#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, p;
	cin >> s >> p;
	int ocur = 0;
	int temp[100005];
	memset(temp, 0, sizeof(temp));
	int j, i;
	for(i = 1; i < p.length(); i++)
	{
		//cout << "hello";
		//int i = 1;
		if(p[i] == p[j])
		{
			temp[i] = j + 1;
			j++;
		}
		else
		{
			while(j >= 0)
			{
				//cout << "hey";
				if(j == 0 && p[i] == p[j])
				{
					temp[i] = j + 1;
					//i++;
					j++;
					break;
				}
				else if(j == 0 && p[i] != p[j])
				{
					temp[i] = 0;
					//i++;
					break;
				}
				else if(j > 0 && p[i] == p[j])
				{
					temp[i] = j + 1;
					j++;
					//i++;
					break;
				}
				else if(j > 0 && p[i] != p[j])
				{
					j = temp[j - 1];
				}
			}
		}
	}
	for(i = 0; i < p.length(); i++)
		cout << temp[i] << endl;
	i = 0;
	j = 0;
	while(i < s.length())
	{
		//cout << "y";
		if(i == s.length() - 1)
		{
			if(j == (p.length() - 1) && s[i] == p[j])
			{
				ocur++;
				break;
			}
			else
				break;
		}
		if(j == p.length())
		{
			ocur++;
			j = 0;
		}
		if(s[i] == p[j])
		{
			i++;
			j++;
			//cout << "YES";
		}
		else if(s[i] != p[j])
		{
			//cout << j << endl;
			if(j == 0)
			{
				//j++;
				i++;
			}
			else
				j = temp[j - 1];
//			cout << temp[j - 1];
		}
	}
	cout << ocur;
}
