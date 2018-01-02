#include<bits/stdc++.h>

using namespace std;

int main()
{
	int ans = 100;
	for(int i = 0; i < 10; i++)
		printf("%d ", ans--);
	for(int i = 0; i < 15 - 10; i++)
		printf("1 ");
}
