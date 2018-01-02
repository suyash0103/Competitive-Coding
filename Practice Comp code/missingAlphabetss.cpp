#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		map <char, int> v;
		map <char, int> :: iterator it1, it2;
		string s;
		cin >> s;
		int num = 26;
		for(int i = 0; i < s.length(); i++)
		{
			//v[i].first = s[i];
			//v[i].second = num;
			v.insert(make_pair(s[i], num));
			num--;
		}
		int n;
		scanf("%d", &n);
		vector <string> vec(n);
		for(int i = 0; i < n; i++)
			cin >> vec[i];
		for(int i = 0; i < n; i++)
		{
			for(int j = i; j < n - 1; j++)
			{
				int k1 = 0, k2 = 0;
				//cout << vec[j][k] <<  " " << vec[j + 1][k] << endl;
				while(k1 < vec[j].length() && k2 < vec[j + 1].length())
				{
					//cout << "S";
					it1 = v.find(vec[j][k1]);
					it2 = v.find(vec[j + 1][k2]);
					//cout << it1 -> second << " " << it2 -> second << endl;
					int x = it1 -> second - it2 -> second;
					//cout << x;
					if(x < 0)
					{
						//cout << "y";
						string temp = vec[j];
						vec[j] = vec[j + 1];
						vec[j + 1] = temp;
						break;
					}
					else if(x == 0)
					{
						k1++;
						k2++;
					}
					else
						break;
				}
			}
		}
		for(int i = 0; i < n; i++)
			cout << vec[i] << endl;
	}
}
//#include<bits/stdc++.h>
//#define PB push_back
//#define MP make_pair
//#define F first
//#define S second
//#define SZ(a) (int)(a.size())
//#define CLR(a) a.clear()
//#define SET(a,b) memset(a,b,sizeof(a))
//#define TR(v,it) for( typeof(v.begin()) it(v.begin()) ; it != v.end() ; it++)
//#define FOR(i,a,b) for(i=(int)a;i<(int)b;i++)
//#define rep(i,n) FOR(i,0,n)
//using namespace std;
//typedef long long LL;
//typedef pair<int,int> PII;
//typedef vector<int> VI;
//typedef vector< PII > VPII;
//string A[100];
//string mp;
//char premp[26];
//int main()
//{
//    int n,i,j,k,t;
//    cin>>t;
//    while(t--)
//    {
//        cin>>mp;
//        cin>>n;
//        rep(i,n)
//            cin>>A[i];
//        rep(i,26)
//            premp[mp[i]-'a'] = 'a' + i;
//        rep(i,n)
//        {
//            rep(j,SZ(A[i]))
//                A[i][j] = premp[ A[i][j]-'a'];
//            cout << A[i] << endl;
//        }
//        sort(A,A+n);
//  //      for(int q = 0; q < 26; q++)
////        	cout << premp[q];
//        rep(i,n)
//        {
//            rep(j,SZ(A[i]))
//            //    cout<<mp[A[i][j]-'a'];
//            cout<<endl;
//        }
//    }
//    return 0;
//}
