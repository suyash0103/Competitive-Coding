#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100000], maxarr[100000];

int main()
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%lld", &a[i]);
			maxarr[i] = a[i];
		}
        int maxele = a[0], ans = 0;
        for(int i = 1; i < n; i++)
        {
            if(maxele < a[i])
            {
                maxele = a[i];
                ans++;
            }
        }
        if(ans % 2 == 0)
            printf("BOB\n");
		else
			printf("ANDY\n");
	}
}


//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef long long int ll;
//
//ll a[100000], maxarr[100000];
//
//int main()
//{
//	int q;
//	scanf("%d", &q);
//	while(q--)
//	{
//		int n;
//		scanf("%d", &n);
//		for(int i = 0; i < n; i++)
//		{
//			scanf("%lld", &a[i]);
//			maxarr[i] = a[i];
//		}
//		int count = 0;
//		sort(maxarr, maxarr + n, greater<ll>());
//		//for(int i = 0; i < n; i++)
//		//	cout << maxarr[i] << " ";
//		int k = n;
//		//cout << k;
//		for(int i = 0; i < k; i++)
//		{
//			for(int j = 0; j < n; j++)
//			{
//				if(maxarr[i] == a[j])
//				{
//					//cout << "a";
//					n = j;
//					count++;
//					break;
//				}
//			}
//			if(n == 0)
//			{
//				break;
//			}
//		}
//		if(count % 2 == 0)
//			printf("ANDY\n");
//		else
//			printf("BOB\n");
//	}
//}
