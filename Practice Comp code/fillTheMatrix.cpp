#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <unordered_map>
#include <cstdio>
 
#define gc getchar_unlocked
#define N 100009
#define M 1000009
 
using namespace std;
 
// color 0 is red, 1 is blue
 
struct quer{
	int v1,v2,diff;
} p[M];
 
vector< pair<int,int> > l[N];
map< pair<int,int>,int > m1;
set< pair< pair<int,int>,int > > s1;
int col[N],flag,vis[N];
 
void dfs(int ver){
	vis[ver]=1;
	for(auto it : l[ver]){
		if(vis[it.first]==1){
			if(it.second==0){
				if(col[it.first]!=col[ver]){
					flag=1;
				}
			}
			else{
				if(col[it.first]!=1-col[ver]){
					flag=1;
				}
			}
		}	
		else{
			if(it.second==0){
				col[it.first]=col[ver];
			}
			else{
				col[it.first]=1-col[ver];
			}
			dfs(it.first);
		}
	}
	return ;
}
 
int main(){
	int i,j,t1,t2,t3,t4,n,t,q;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&q);
		flag=0;
		s1.clear();
		m1.clear();
		for(i=1;i<=n;i++){
			l[i].clear();
			col[i]=-1;
		}
		for(i=0;i<q;i++){
			scanf("%d %d %d",&p[i].v1,&p[i].v2,&p[i].diff);
			if(p[i].v1==p[i].v2){
				if(p[i].diff!=0){
					flag=1;
				}
			}
			else{
				s1.insert(make_pair(make_pair(min(p[i].v1,p[i].v2),max(p[i].v1,p[i].v2)),p[i].diff));
				m1[make_pair(p[i].v1,p[i].v2)]=p[i].diff;
			}
		}
		for(i=0;i<q;i++){
			if(m1.find(make_pair(p[i].v2,p[i].v1))!=m1.end()){
				if(m1[make_pair(p[i].v1,p[i].v2)]!=m1[make_pair(p[i].v2,p[i].v1)]){
					flag=1;
				}
			}
		}
		if(flag){
			printf("no\n");
			continue;
		}
		//two coloring graph
		for(auto it : s1){
			l[it.first.first].push_back(make_pair(it.first.second,it.second));
			l[it.first.second].push_back(make_pair(it.first.first,it.second));
		}
		memset(vis,-1,sizeof(vis));
		memset(col,-1,sizeof(col));
		for(i=1;i<=n;i++){
			if(vis[i]==-1){
				col[i]=0;
				dfs(i);
			}
		}
		if(flag){
			printf("no\n");
		}
		else{
			printf("yes\n");
		}
	}
	return 0;
} 
