#include<bits/stdc++.h>

using namespace std;

int a[31];

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		int k, n;
		scanf("%d%d", &k, &n);
		for(int j = 0; j < n; j++)
			scanf("%d", &a[j]);
		int max1 = 0, max2 = 0, maxmax = 0, maxFinal = 0;
		//while(k >= 0)
		//{
			for(int j = 0; j < n - 1; j++)
			{		
				for(int k = j + 1; k < n; k++)
				{
					if(a[j] <= a[k])
					{
						max1 = a[k] - a[j];
						for(int l = k + 1; l < n; l++)
						{
							for(int m = l + 1; m < n; m++)
							{
								if(a[l] <= a[m])
								{
									max2 = a[m] - a[l];
									maxmax = max1 + max2;
									if(maxFinal < maxmax)
										maxFinal = maxmax;
								}
							}
						}
					}
				}
			}
		//	k--; 	
		//}
		printf("%d\n", maxFinal);
	}
}
