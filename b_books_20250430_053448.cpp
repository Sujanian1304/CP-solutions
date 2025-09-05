/*
 * Problem: B. Books
 * URL: https://codeforces.com/problemset/problem/279/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0) p[i]=arr[i];
		else p[i]=arr[i]+p[i-1];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int x=0;
		if (i!=0) x=p[i-1];
		auto y=lower_bound(p.begin()+i,p.end(),(m+x))-p.begin();
		
			if(p[y]-x==m){ans=max(ans,(y-i+1));}
			else ans=max(ans,(y-i));
		
	}
	cout<<ans;
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
