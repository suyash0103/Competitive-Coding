#include <bits/stdc++.h>
using namespace std;
int c[1505][1505];
int l,s;

bool solve(int mid)
{
	for(int i = mid;i <= l;i++)
    {
            for(int j = mid;j <= l;j++)
            {
                int tmp = c[i][j] - c[i-mid][j-mid];
                if(tmp <= s) return true;
            }
     }
        return false;
}

int main()
{
	int t;  cin>>t;
	while(t--)
	{
		cin>>s;
		string a,b;  
		cin>>a>>b;
		l = a.length();
		for(int i=0;i<l;++i)
		{
		  	  for(int j=0;j<l;++j)
		  	  {
		  	  	if(a[i]==b[j])
		  	  	 c[i+1][j+1] = c[i][j] ;
		  	  	 else
		  	  	 c[i+1][j+1] = c[i][j] +1;
			  }
		  }
		  int low = 0,high = l,mid;
            while(low < high)
			{
                mid = (low + high + 1) >> 1;
                if(solve(mid)) low = mid;
                else high = mid - 1;
            }
		  cout<<low<<endl;
	}
}



/*#include <bits/stdc++.h>

using namespace std;

int lcs(string s1, string s2, int n, int S)
{
	int LCS[n + 1][n + 1];
	int answer = 0, maxPos1 = 0, maxPos2 = 0, minPos1 = n, minPos2 = n;
	
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if(i == 0 || j == 0)
				LCS[i][j] = 0;
			else if(s1[i - 1] == s2[j - 1])
			{
				LCS[i][j] = 1 + LCS[i - 1][j - 1];
				
				if(answer < LCS[i][j])
				{
					if(maxPos1 < i - 1)
						maxPos1 = i - 1;
					if(maxPos2 < j - 1)
						maxPos2 = j - 1;
					//if(minPos1 > i - 1)
					//	minPos1 = i - 1;
					//if(minPos2 > j - 1)
					//	minPos2 = j - 1;
					answer = LCS[i][j];
					minPos1 = maxPos1 - answer + 1;
					minPos2 = maxPos2 - answer + 1;
				}
			}
			else
				LCS[i][j] = 0;
		}
	}
	while(minPos1 > 0 && S > 0 && minPos2 > 0)
	{
		if(s1[minPos1 - 1] == s2[minPos2 - 1])
		{
			answer++;
			minPos1--;
			minPos2--;
			continue;			
		}
		answer++;
		minPos1--;
		minPos2--;
		S--;
	}
	if(S <= 0)
	{
		while(minPos1 > 0 && minPos2 > 0)
		{
			if(s1[minPos1 - 1] == s2[minPos2 - 1])
			{
				answer++;
				minPos1--;
				minPos2--;
			}
			minPos1--;
			minPos2--;
		}
	}
	if(S > 0)
	{
		while(maxPos1 < n - 1 && S > 0 && maxPos2 < n - 1)
		{
			if(s1[maxPos1 + 1] == s2[maxPos2 + 1])
			{
				answer++;
				maxPos1++;
				maxPos2++;
				continue;
			}
			answer++;
			maxPos1++;
			maxPos2++;
			S--;
		}
	}
	if(S <= 0)
	{
		while(maxPos1 < n - 1 && maxPos2 < n - 1)
		{
			if(s1[maxPos1 + 1] == s2[maxPos2 + 1])
			{
				answer++;
				maxPos1++;
				maxPos2++;
			}
			maxPos1++;
			maxPos2++;
		}
	}
	//printf("%d %d %d %d\n", maxPos1, maxPos2, minPos1, minPos2);
	return answer;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int S;
		scanf("%d", &S);
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.length();
		int ans = lcs(s1, s2, n, S);
		printf("%d\n", ans);
	}
}*/
