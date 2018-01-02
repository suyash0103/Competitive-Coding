#include <iostream>
#include <cstring>

using namespace std;

int palin(string s, int n, int left, int right)
{
	//bool table[n][n];
	//memset(table, 0, sizeof(table));
	int max = 1;
	/*for(int i = 0; i < n; i++)
		table[i][i] = true;
	for(int i = 0; i < n - 1; i++)
	{
		if(s[i] == s[i + 1])
		{
			max = 2;
			//table[i][i + 1] = true;
			return max;
		}
	}
	for(int k = 3; k <= n; ++k)
    {
        for(int i = 0; i < n-k+1 ; ++i)
        {
            int j = i + k - 1;
            if(table[i+1][j-1] && s[i] == s[j])
            {
                table[i][j] = true;
                if(k > 2)
                {
                    return k;
                }
            }
        }
	}*/
	int low, high, start;
	for (int i = 1; i < n; ++i)
    {
        // Find the longest even length palindrome with center points
        // as i-1 and i.  
        low = i - 1;
        high = i;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            if (high - low + 1 > max)
            {
                start = low;
                max = high - low + 1;
                return max;
            }
            --low;
            ++high;
        }
 
        // Find the longest odd length palindrome with center 
        // point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            if (high - low + 1 > max)
            {
                start = low;
                max = high - low + 1;
                return max;
            }
            --low;
            ++high;
        }
    }
	return max;
}

int main()
{
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
		string s;
		cin >> s;
		int n = s.length();
		int x = palin(s, n, 0, n - 1);
		if(x >= 2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
