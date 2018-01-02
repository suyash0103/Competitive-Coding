#include<bits/stdc++.h>

using namespace std;

int main()
{
	//set <int> s;
	int a[] = {40, 30, 20, 20, 10};
	set <int> s(a, a + 5);
	set <int> :: iterator it;
	for(it = s.begin(); it != s.end(); it++)
		cout << *it << endl;
}
