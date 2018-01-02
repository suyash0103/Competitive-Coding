#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll H, A;
		scanf("%lld%lld", &H, &A);
		ll s = H * H - 4 * A;
		if(s > 0)
		{
			float b = (sqrt(H * H + 4 * A) + sqrt(H * H - 4 * A)) / 2;
			float h = (sqrt(H * H + 4 * A) - sqrt(H * H - 4 * A)) / 2;
			//if(b < 0 || h < 0)
			//{
			//	printf("-1\n");
			//	continue;
			//}
			if(b < h)
			{
				//cout << H << " ";
				printf("%f %f %f\n", b, h, (float)H);
			}
			else
			{
				//cout << H << " ";
				printf("%f %f %f\n", h, b, (float)H);
			}
		}
		else
		{
			printf("-1\n");
		}
		//cout << s;	
	}
}
