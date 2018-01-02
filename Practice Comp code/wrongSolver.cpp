#include<bits/stdc++.h>

using namespace std;

int wrongSolver(std::vector <unsigned int> a) 
{
	int n = a.size();
	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) 
	{
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) 
	{
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) 
	{
		unsigned int val = prefSum[i] + sufSum[i];
		//printf("%d\n", val);
		if (val < mn) 
		{
			mn = val;
			where = i + 1;
		}
	}
	return where;
}

int main()
{
	int n;
	scanf("%d", &n);
	vector <unsigned int> v(n);
	int add1 = 1;
	int add2 = 2;
//	for(int i = 0; i < n / 2 - 1; i++)
//	{
////		v[i] = add1;
////		add1 += 2;
//		v[i] = 100000;
//	}
//	v[n / 2 - 1] = 1;
//	v[n / 2] = 2;
//	for(int i = n / 2 + 1; i < n; i++)
//	{
////		v[i] = add2;
////		add2 += 2;
//		v[i] = 100000;
//		//cout << "h";
//	}
//	v[99990] = 1;
//	v[99991] = 2;
//	v[99993] = 3;
//	v[99994] = 4;
//	v[99995] = 5;
//	v[99996] = 6;
//	v[99997] = 7;
//	v[99998] = 8;
//	v[99999] = 9;
//	v[n - 1] = 24;
	int max = -1, maxpos = 0;	
	int floor = 99991, ceiling = 100001, range = (ceiling - floor);
	for(int i = 0; i < n; i++)
	{
		//scanf("%d", &v[i]);
		int rnd = floor + int((range * rand()) / (RAND_MAX + 1.0));
			cout << rnd << " ";
		v[i] = rnd;
//		if(max < v[i])
//		{
//			//cout << "H";
//			max = v[i];
//			maxpos = i + 1;
//		}
	}
//	cout << maxpos << endl;
//	cout << v[0] << " " << v[1];
//	int p = n / 100000;
//	int q = n % 100000;
//	for(int i = 0; i < n; i++)
//	{
//		if(i % 10 == 0)
//			v[i] = 100000;
//		else if(i % 10 == 1)
//			v[i] = 99999;
//		else if(i % 10 == 2)
//			v[i] = 99998;
//		else if(i % 10 == 3)
//			v[i] = 99997;
//		else if(i % 10 == 4)
//			v[i] = 99996;
//		else if(i % 10 == 5)
//			v[i] = 99995;
//		else if(i % 10 == 6)
//			v[i] = 99994;
//		else if(i % 10 == 7)
//			v[i] = 99993;
//		else if(i % 10 == 8)
//			v[i] = 99992;
//		else if(i % 10 == 9)
//			v[i] = 99991;
//	}
	int ans = wrongSolver(v);
	printf("%d\n", ans);
}
