#include<bits/stdc++.h>
 
using namespace std;
 
#define lld long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
 
 
	int test;
	scanf("%d", &test);
 
	while(test--){
		int n, d;
		cin >> n >> d;
 
		vector<lld> arr(n+1, 0);
		lld sum = 0;
		for(int i=1; i<=n; ++i)
			cin >> arr[i], sum += arr[i];
 
		if(sum % n != 0){
			cout << -1 << endl;
			continue;
		}
 
		lld avg = sum / n;
		
		bool check = true;
 
		for(int i=1; i<=d; ++i){
			lld total_i = 0;
			int numbers = 0;
			for(int j=i; j<=n; j += d){
				total_i += arr[j];
				numbers += 1;
			}
			if(numbers)
			if(total_i % numbers != 0 or total_i / numbers != avg)
				check = false;
		 }
		if(check == false){
			cout << -1 << endl;
			continue;
		}
		lld cnt = 0;
		for(int i=1; i+d<=n; ++i){
			if(arr[i] == avg)
				continue;
			else {
				if(arr[i] > avg){
					lld temp = arr[i] - avg;
					arr[i+d] += temp;
					arr[i] -= temp;
					cnt+=temp;
				}
				else if(arr[i] < avg){
					lld temp = avg - arr[i];
					arr[i] += temp;
					arr[i+d] -= temp;
					cnt+=temp;
				}
			}
		}
		if(check)
			cout << cnt << endl;
		else
			cout << -1 << endl;
 
	}
}
