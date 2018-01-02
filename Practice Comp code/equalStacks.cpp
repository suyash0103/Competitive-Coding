#include <bits/stdc++.h>

using namespace std;

int func(vector <int>& h1, vector <int>& h2, vector <int>& h3, int *sum1, int *sum2, int *sum3)
{
	if(*sum1 == *sum2 && *sum2 == *sum3)
		return 1;
	else if(*sum1 <= 0 || *sum2 <= 0 || *sum3 <= 0)
		return 0;
	else 
	{
		if(*sum1 > *sum2 && *sum1 > *sum3)
		{
			*sum1 = *sum1 - h1.back();
			h1.pop_back();
			func(h1, h2, h3, sum1, sum2, sum3);
		}
		else if(*sum2 > *sum3 && *sum2 > *sum1)
		{
			*sum2 = *sum2 - h2.back();
			h2.pop_back();
			func(h1, h2, h3, sum1, sum2, sum3);
		}
		else if(*sum3 > *sum1 && *sum3 > *sum2)
		{
			sum3 = sum3 - h3.back();
			h3.pop_back();
			func(h1, h2, h3, sum1, sum2, sum3);
		}
		else if(sum1 == sum2 && sum1 != sum3)
		{
			if(sum1 > sum3)
			{
				sum1 = sum1 - h1.back();
				h1.pop_back();
				sum2 = sum2 - h2.back();
				h2.pop_back();	
				func(h1, h2, h3, sum1, sum2, sum3);
			}
			else
			{
				sum3 = sum3 - h3.back();
				h3.pop_back();
				func(h1, h2, h3, sum1, sum2, sum3);
			}
		}
		else if(sum1 == sum3 && sum1 != sum2)
		{
			if(sum1 > sum2)
			{
				sum1 = sum1 - h1.back();
				h1.pop_back();
				sum3 = sum3 - h3.back();
				h3.pop_back();
				func(h1, h2, h3, sum1, sum2, sum3);
			}
			else
			{
				sum2 = sum2 - h2.back();
				h2.pop_back();
				func(h1, h2, h3, sum1, sum2, sum3);
			}
		}
		else if(sum2 == sum3 && sum2 != sum1)
		{
			if(sum2 > sum1)
			{
				sum2 = sum2 - h2.back();
				h2.pop_back();
				sum3 = sum3 - h3.back();
				h3.pop_back();
				func(h1, h2, h3, sum1, sum2, sum3);
			}
			else
			{
				sum1 = sum1 - h1.back();
				h1.pop_back();
				func(h1, h2, h3, sum1, sum2, sum3);
			}
		}
		return *sum1;
	}
}

int main()
{
    int n1;
    int n2;
    int n3;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0; h1_i < n1; h1_i++)
	{
        cin >> h1[h1_i];
        sum1 = sum1 + h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0; h2_i < n2; h2_i++)
	{
        cin >> h2[h2_i];
        sum2 = sum2 + h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0; h3_i < n3; h3_i++)
	{
        cin >> h3[h3_i];
        sum3 = sum3 + h3[h3_i];
    }
    int ans = func(h1, h2, h3, &sum1, &sum2, &sum3);
    printf("%d", ans);
}
