#include<bits/stdc++.h>

using namespace std;

long long int counter = 0;

int main()
{
	int a1, a2;
	scanf("%d%d", &a1, &a2);
	while(a1 > 0 && a2 > 0)
	{
		if(a1 <= a2)
		{
			a1++;
			a2 = a2 - 2;
			if(a2 >= 0)
				counter++;
		}
		else if(a1 > a2)
		{
			a1 = a1 - 2;
			a2++;
			if(a1 >= 0)
				counter++;
		}
	}
	printf("%I64d", counter);
}
