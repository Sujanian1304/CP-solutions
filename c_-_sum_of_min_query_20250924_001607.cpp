/*
 * Problem: C - Sum of Min Query
 * URL: https://atcoder.jp/contests/abc420/tasks/abc420_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int minsum=0;
	for(int  i=0;i<n;i++){
		minsum+=min(a[i],b[i]);
	}
	for(int i=0;i<m;i++){
		char c;int d,e;cin>>c>>d>>e;
		if(c=='A'){
			int x=min(a[d-1],b[d-1]);
			minsum-=x;
			a[d-1]=e;
			minsum+=min(a[d-1],b[d-1]);
			cout<<minsum<<"\n";
		}else{
			int x=min(a[d-1],b[d-1]);
			minsum-=x;
			b[d-1]=e;
			minsum+=min(a[d-1],b[d-1]);
			cout<<minsum<<"\n";
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
