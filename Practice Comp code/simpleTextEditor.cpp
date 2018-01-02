#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		string s, s1;
		int t, l;
		stack <string> st;
		scanf("%d", &t);
		s[0] = '\0';
		if(t == 1)
		{
			cin >> s1;
			s = s + s1;
		}
		else if(t == 2)
		{
			l = s.length();
			int ch;
			scanf("%d", &ch);
			string s2 = s.substr(l - ch, s.size());
			st.push(s2);
			s.erase(l - ch, s.size());
		}
		else if(t == 3)
		{
			int j;
			scanf("%d", &j);
			printf("%c", s[j - 2]);
		}
		else
		{
			s = s + st.top();
			st.pop();
		}
	}
	return 0;
}
