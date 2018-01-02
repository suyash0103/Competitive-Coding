#include<bits/stdc++.h>

using namespace std;

int a[10000][10000];
vector <int> b[100000];

int main()
{
	memset(a, 0, sizeof(a));
	int n, k;
	scanf("%d%d", &n, &k);
	//cout << a[100][37];
	int u, v;
	scanf("%d%d", &u, &v);
	//a[u - 1][v - 1] = 100;
	if(k == 0)
	{
			
	}
	for(int i = 0; i < k; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		a[x - 1][y - 1] = -1;
	}
	int p = u - 1, q = v - 1;
	int CL = 0, CR = 0, CU = 0, CD = 0, CUR = 0, CUL = 0, CDL = 0, CDR = 0;
	while(p >= 0 && a[p][q] != -1)
	{
		p--;
		CL++;
	}
	CL--;
	p = u - 1;
	q = v - 1;
	while(p < n && a[p][q] != -1)
	{
		p++;
		CR++;
	}
	CR--;
	p = u - 1;
	q = v - 1;
	while(q >= 0 && a[p][q] != -1)
	{
		q--;
		CD++;
	}
	CD--;
	p = u - 1;
	q = v - 1;
	while(q < n && a[p][q] != -1)
	{
		q++;
		CU++;
	}
	CU--;
	p = u - 1;
	q = v - 1;
	//printf("%d %d %d %d", CL, CR, CU, CD);
	while(p >= 0 && q >= 0 && a[p][q] != -1)
	{
		p--;
		q--;
		CDL++;
	}
	CDL--;
	p = u - 1;
	q = v - 1;
	while(p < n && q >= 0 && a[p][q] != -1)
	{
		p++;
		q--;
		CDR++;
	}
	CDR--;
	p = u - 1;
	q = v - 1;
	while(p >= 0 && q < n && a[p][q] != -1)
	{
		p--;
		q++;
		CUL++;
	}
	CUL--;
	p = u - 1;
	q = v - 1;
	while(p < n && q < n && a[p][q] != -1)
	{
		p++;
		q++;
		CUR++;
	}
	CUR--;
	p = u - 1;
	q = v - 1;
	printf("%d", CL + CR + CD + CU + CDL + CDR + CUL + CUR);
	//printf("%d %d %d %d %d %d %d %d", CL, CR, CU, CD, CUL, CUR, CDL, CDR);
}
