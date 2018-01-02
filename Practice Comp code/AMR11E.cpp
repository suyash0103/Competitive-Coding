#include<bits/stdc++.h>

using namespace std;

int a[1001];

bool isPrime(int n)
{
	int flag = 0;
	for(int i = 2; i <= n / 2; i++)
	{
		if(n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		return true;
	else
		return false;
}

int main()
{
	a[0] = 30;
	a[1] = 42;
	int n = 44;
	int pos = 2;
	while(pos <= 1000)
	{
		//cout << "while" << " " << n <<  endl;
		if(!isPrime(n))
		{
			int count = 0, flag = 0;
			for(int i = 2; i <= n / 2; i++)
			{
				if(count >= 3)
				{
					flag = 1;
					break;
				}
				if(n % i == 0 && i == 2)
					count++;
				else if(n % i == 0 && i != 2)
				{
					if(isPrime(i))
						count++;
				}
			}
			if(flag == 1)
			{
				a[pos] = n;
				pos++;
				n++;
			}
			else
				n++;
			//pos++;
		}
		else
			n++;
	}
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", a[n - 1]);
	}
}
