#include<bits/stdc++.h>

using namespace std;

int a[100000];

//int check(int a[], int )

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		int flag = 0, answer = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for(int i = 0; i < n - 1; i++)
		{
			int count = 0;
			for(int j = i + 1; j < n; j++)
			{
				if(count > 2)
					break;
				if(a[i] > a[j])
					count++;
			}
			if(count > 2)
			{
				flag = 1;
				cout << "Too chaotic" << endl;
				break;
			}
			else
			{
				answer = answer + count;
			}
		}
		if(flag == 0)
		{
			printf("%d\n", answer);
		}		
	}
}
