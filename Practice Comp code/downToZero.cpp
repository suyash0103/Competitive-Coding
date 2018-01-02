#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
	int flag = 0;
	for(int i = 2; i <= num / 2; i++)
	{
		if(num % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return false;
	else
		return true;
}

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int n;
		scanf("%d", &n);
		stack <int> s;
		for(int j = 1; j <= n / 2; j++)
			s.push(j);
		int count = 0;
		while(n != 0)
		{
			bool prime = isPrime(n);
			if(prime == true)
			{
				count = count + n;
				break;
			}
			else
			{
				while(1)
				{
					int x = s.top();
					s.pop();
					if(n % x == 0)
					{
						n = x;
						count++;
						break;
					}
				}
			}
		}
		printf("%d\n", count);
	}
}
