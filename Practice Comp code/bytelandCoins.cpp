#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll count(ll n)
{
	if(n == 0)
		return 0;
	ll max_val1 = n / 2 + n / 4 + n / 3;
	ll max_val2 = n;
	ll answer1, answer2, answer3, answer4, answerFinal;
	answer1 = max(count(n / 2), count(n / 4));
	answer2 = max(count(n / 3), answer1);
	answer3 = max(answer1, answer2);
	answer4 = max(max_val1, max_val2);
	answerFinal = max(answer3, answer4);
	return answerFinal;
}

int main()
{
	ll n;
	while(scanf("%lld", &n) == 1)
	{
		if(n == 0)
			printf("0\n");
		else
			printf("%lld\n", count(n));
	}
}
