#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int maxSum = 0, minSum = 0, count = 0;
		for(int i = 0; i < n; i++)
		{
			int u;
			scanf("%d", &u);
			maxSum += u;
			if(u != 0)
				count++;
		}
//		if(maxSum < 100)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			minSum = maxSum - count;
//			if(minSum > 100)
//				cout << "NO" << endl;
//			else
//				cout << "YES" << endl;
//		}
		minSum = maxSum - count;
		if(count > 0)
			minSum++;
		if(100 >= minSum && 100 <= maxSum)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
