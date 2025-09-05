/*
 * Problem: B. Lamps
 * URL: https://codeforces.com/problemset/problem/1839/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> arr(n);int m=0;
    for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr[i]={a,b};
		m=max(m,a);
	}
	sort(arr.begin(),arr.end());
    int ans=0;
    int i=0;
    while(i<n){
		int cur=arr[i].first;
		vector<int> g;
		while(i<n&&arr[i].first==cur){
			g.push_back(arr[i].second);
			i++;
		}
		int x=g.size()-1;int y=cur;
		while(y--&&x>=0){
			ans+=g[x];
			x--;
		}
	}
	cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
