#include<bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for(int j = 0; j < n; j++)
			scanf("%d", &a[j]);
		int low = 0, high = 0, low_next, high_next, low_to_high, high_to_low, high_to_high;
		for(int j = 1; j < n; j++)
		{
			low_to_high = a[j] - 1;
			if(low_to_high < 0)
				low_to_high = (-1) * low_to_high;
				
			high_to_low = a[j - 1] - 1;
			if(high_to_low < 0)
				high_to_low = (-1) * high_to_low;
			
			high_to_high = a[j] - a[j - 1];
			if(high_to_high < 0)
				high_to_high = (-1) * high_to_high;
				
			low_next = max(low, high + high_to_low);
			high_next = max(low + low_to_high, high + high_to_high);
			
			low = low_next;
			high = high_next;
		}
		int x = max(low, high);
		printf("%d", x);
	}
}
