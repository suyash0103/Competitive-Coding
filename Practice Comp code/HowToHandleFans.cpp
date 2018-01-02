#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll input[100005], segTree[200005];

ll constructTree(ll input[], ll segTree[], int low, int high, int pos)
{
	cout << "cons" << endl;
	if(low == high)
	{
		segTree[pos] = input[low];
		return segTree[pos];
	}
	int mid = (low + high) / 2;
	constructTree(input, segTree, low, mid, 2 * pos + 1);      
	constructTree(input, segTree, mid + 1, high, 2 * pos + 2);
	segTree[pos] = segTree[2 * pos + 1] + segTree[2 * pos + 2];
	return segTree[pos];
}

int giveSum(ll input[], ll segTree[], int qlow, int qhigh, int low, int high, int pos)
{
	if(qlow <= low && qhigh >= high)
	{
		return segTree[pos];
	}
	if(qlow > high || qhigh < low)
	{
		return 0;
	}
	int mid = (low + high) / 2;
	return giveSum(input, segTree, qlow, qhigh, low, mid, 2 * pos + 1) + giveSum(input, segTree, qlow, qhigh, mid + 1, high, 2 * pos + 2);
}

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	memset(input, 0, 100005);
	memset(segTree, 0, 200005);
	while(q--)
	{
		ll p, f;
		scanf("%lld%lld", &p, &f);
		input[p - 1] = f;
	}
	int size = sizeof(input) / sizeof(input[0]);
	constructTree(input, segTree, 0, size - 1, 0);
	//cout << "Hey";
	int x = 3;
	while(x--)
	{
		cout << 100000;
		int u, v;
		scanf("%d%d", &u, &v);
		cout << giveSum(input, segTree, u - 1, v - 1, 0, size - 1, 0) << endl;
	}
}
