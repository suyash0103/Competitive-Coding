#include<bits/stdc++.h>

using namespace std;

int a[20005];

int recur(int a[200005], int n)
{
	if(n == 2)
	{
		return 0;
	}
	int left[200005];
	int right[200005];
	int point = (n - 1) / 2;
	int pivot = a[point];
	int count_left = 0, count_right = 0;   
	for(int i = 0; i < n; i++)
	{
		if(i == point)
			continue;
		if(a[i] < pivot)
		{			
			left[count_left] = a[i];
			count_left++;
		}
		else if(a[i] >= pivot)
		{
			right[count_right] = a[i];
			count_right++;
		}
	}
	if(count_left == 0)
	{
		int x = recur(right, count_right);
		if(x == 1)
			return 1;
		else if(x == 0)
			return 0;
	}
	else if(count_right == 0)
	{
		int y = recur(left, count_left);
		if(y == 1)
			return 1;
		else if(y == 0)
			return 0;
	}
	if(count_left != 0 && count_right != 0)
	{
		return 1;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		if(n == 2)
		{
			printf("YES\n");
			continue;
		}
		int ans = recur(a, n);
		if(ans == 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
