#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int m, n, x;
		scanf("%d%d%d", &n, &m, &x);
		int num1;
		stack <int> s1;
		stack <int> s2;
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &num1);
			s1.push(num1);
		}
		int num2;
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &num2);
			s2.push(num2);
		}
		int sum = 0, count = 0;
		while(sum <= x)
		{
			if(sum == x)
				break;
			int top1 = s1.top();
			int top2 = s2.top();
			if(top1 <= top2)
			{
				if(sum + top1 <= x)
				{
					sum = sum + top1;
					s1.pop();
					count++;	
				}
			}
			else 
			{
				if(sum + top2 <= x)
				{
					sum = sum + top2;
					s2.pop();
					count++;
				}
			}
		}
		printf("%d", count);
	}
}
