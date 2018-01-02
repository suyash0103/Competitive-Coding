#include<bits/stdc++.h>

using namespace std;

char s1[1000], s2[1000];

int lcs(char *s1, char *s2, int m, int n)
{
	int LCS[m + 1][n + 1];
	int answer = 0;
	for(int i = 0; i <= m; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if(i == 0 || j == 0)
				LCS[i][j] = 0;
			/*else if(s1[i] >= 'a' && s1[i] <= 'z')
			{
				if((s1[i] - 32) == s2[j])
				{
					LCS[i][j] = 1 + LCS[i - 1][j - 1];
					answer = max(answer, LCS[i][j]);	
				}
			}*/
			//else if(s1[i] >= 'A' && s1[i] <= 'Z')
			//{
				if(s1[i - 1] == s2[j - 1])
				{
					LCS[i][j] = 1 + LCS[i - 1][j - 1];
					answer = max(answer, LCS[i][j]);	
				}
			//}
			else
				LCS[i][j] = 0;
		}
	}
	return answer;
}

int main()
{
	int q;
	scanf("%d", &q);
	while(q--)
	{
		cin >> s1 >> s2;
		int m = strlen(s1);
		int n = strlen(s2);
		int ans = lcs(s1, s2, m, n);
		/*if(ans)
			printf("YES\n");
		else
			printf("NO\n");*/
		printf("%d", ans);
	}
}
