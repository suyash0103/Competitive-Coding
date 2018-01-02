#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    int max = 0;
    for(int i = _l; i <= _r; i++)
    {
    	for(int j = _l; j <= _r; j++)
    	{
    		res = i ^ j;
    		if(res > max)
    			max = res;
		}
	}
	cout << max;
    
    return 0;
}
