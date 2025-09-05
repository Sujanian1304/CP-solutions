/*
 * Problem: B. Morning Jogging
 * URL: https://codeforces.com/problemset/problem/1517/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    map<int,vector<int>>mp;
    vector<vector<int>> a(n,vector<int>(m)),g(n,vector<int>(m,0));vector<pair<int,pair<int,int>>> p;
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];p.push_back({a[i][j],{i,j}});
			mp[i].push_back(a[i][j]);
		}
	}
	sort(p.begin(),p.end());
	for(int i=0;i<m;i++){
		g[p[i].second.first][i]=p[i].first;
		a[p[i].second.first][p[i].second.second]=0;
	}
	  vector<deque<int>> c(n);
	  for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]!=0){
				c[i].push_back(a[i][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]==0){
				int x=c[i].front();
				g[i][j]=x;
				c[i].pop_front();
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<g[i][j]<<" ";
		}
		cout<<"\n";
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
