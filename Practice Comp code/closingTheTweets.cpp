#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n+1);
	int flag=1;
	int count=0;
	string str;
	getline(cin,str);
	while(k--)
	{
		string s;
		getline(cin,s);
		if(s.compare(2,1,"O"))
		{
			string temp;
			temp.append(s,6,s.size()-6);
			int x=stoi(temp);
			if(a[x]==flag)
			{
				count--;
				a[x]=flag-1;
			}
			else{
				count++;
				a[x]=flag;
			}
		}
		else{
			count=0;
			flag++;
		}
		cout<<count<<endl;
	}
}
