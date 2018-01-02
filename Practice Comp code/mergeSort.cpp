#include<bits/stdc++.h>

using namespace std;

int merge(int L[], int R[], int a[])
{
	int i = 0, j = 0, k = 0;
	int n1 = sizeof(L) / sizeof(L[0]);
	int n2 = sizeof(R) / sizeof(R[0]);
	while(i < n1 && j < n2)
	{
		if(L[i] < R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1)
	{
		a[k] = L[i];
		k++;
		i++;
	}
	while(j < n2)
	{
		a[k] = R[j];
		k++;
		j++;
	}
}


void mergesort(int a[], int l, int n)
{
	if(l >= n)
		return;
	int mid = l + (n - 1) / 2;
	int L[mid], R[mid];
	for(int i = 0; i < mid; i++)
		L[i] = a[i];
	for(int j = mid; j < n; j++)
		R[j] = a[j];
	mergesort(L, l, mid);
	mergesort(R, mid, n);
	merge(L, R, a);
}


int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	mergesort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
