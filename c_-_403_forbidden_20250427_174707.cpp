/*
 * Problem: C - 403 Forbidden
 * URL: https://atcoder.jp/contests/abc403/tasks/abc403_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,q;cin>>n>>m>>q;
    vector<int> e(n+1,0);
    vector<set<int>> arr(n+1);
    for(int i=0;i<q;i++){
		int a;cin>>a;
		if(a==1){
			int b,c;cin>>b>>c;
			arr[b].insert(c);
			if(e[b]!=1)e[b]=2;
			if(arr[b].size()==m) e[b]=1;
		}
		else if(a==2){
			int b;cin>>b;
			e[b]=1;
		}else {
			int b,c;cin>>b>>c;
			if(e[b]==0){cout<<"No\n";}
			else if(e[b]==1){cout<<"Yes\n";}
			else {
			auto it=arr[b].lower_bound(c);
			if(*it==c){cout<<"Yes\n";}
			else cout<<"No\n";
		}
	}
}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
