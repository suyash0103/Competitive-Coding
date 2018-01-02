#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n == 1)
			cout << "1" << endl;
		else if(n == 2)
			printf("1 2\n");
		else if(n == 3)
			printf("1 2 3\n");
		else if(n == 4)
			printf("2 3 4 5\n");
		else if(n == 5)
			printf("3 4 5 6 7\n");
		else if(n == 6)
			printf("4 5 6 7 8 9\n");
		else if(n == 7)
			printf("5 6 7 8 9 10 11\n");
		else
		{
			for(int k = 0; k < n; k++)
				printf("%d ", n - 2 + k);
			printf("\n");
		}
	}
}
