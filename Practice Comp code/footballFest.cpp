#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int N, first, person;
		scanf("%d%d", &N, &first);
		stack <int> s;
		s.push(first);
		while(N--)
		{
			printf("1");
			char c;
			cin >> c;
			if(c == 'P')
			{
				scanf("%d", &person);
				s.push(person);
			}
			else
			{
				int x = s.top();
				s.pop();
				int y = s.top();
				s.pop();
				s.push(x);
				printf("%d\n", y);
			}
		}
	}
	return 0;
}
