/*
 * Problem: B - Reverse Proxy
 * URL: https://atcoder.jp/contests/abc410/tasks/abc410_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,q;cin>>n>>q;
    vector<int> a(q),c(q+1);
    for(int i=0;i<q;i++){
		cin>>a[i];
	}
     vector<int> b;
    for(int i=0;i<q;i++){
		if(a[i]>0){
			b.push_back(a[i]);
			c[a[i]]++;
		}else {
			 int m=1;
			for(int i=1;i<=n;i++){
				if(c[m]>c[i]){
					m=i;
				}
			}
			b.push_back(m);
			c[m]++;
		}
	}
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<" ";
	}
	
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
