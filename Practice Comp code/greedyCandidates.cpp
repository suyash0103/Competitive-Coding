#include<bits/stdc++.h>

using namespace std;

int minSalary[1000], offeredSalary[1000], maxJobOffers[1000], qual[1000][1000], usefulCompany[1000];

//memset(usefulCompany, 0, 1000);

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int N, M;
		scanf("%d%d", &N, &M);
		for(int j = 0; j < N; j++)
			scanf("%d", &minSalary[j]);
		for(int j = 0; j < M; j++)
		{
			scanf("%d%d", &offeredSalary[j], &maxJobOffers[j]);
			usefulCompany[j] = maxJobOffers[j];	
		}
		for(int j = 0; j < N; j++)
			for(int k = 0; k < M; k++)
				scanf("%d", &qual[i][j]);
				
		int candidatesWithJob = 0, totalSalary = 0, wasteComapny = 0;
		
		int max, maxFinal = 0, flag = 0, x;
		
		for(int j = 0; j < N; j++)
		{
			for(int k = 0; k < M; k++)
			{
				if(qual[j][k] == 1)
				{
					if(offeredSalary[k] >= minSalary[j] && maxJobOffers[k] > 0)
					{
						max = offeredSalary[k];
						flag = 1;
						if(maxFinal < max)
						{
							maxFinal = max;
							x = k;	
						}
					}
				}
			}
			if(flag == 1)
			{
				maxJobOffers[x]--;
				usefulCompany[x]--;
				candidatesWithJob++;
				totalSalary += maxFinal;
			}
			maxFinal = 0;
			flag = 0;
		}
	}
}
