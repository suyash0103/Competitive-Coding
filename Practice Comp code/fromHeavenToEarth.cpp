#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int N, V1, V2;
		scanf("%d%d%d", &N, &V1, &V2);
		float Ts = (float) (N * sqrt(2)) / V1;
		float Te = (float) (N * 2) / V2;
		if(Ts < Te)
			printf("Stairs\n");
		else
			printf("Elevator\n");
	}
}
