/*
 * Problem: B. Two Buttons
 * URL: https://codeforces.com/problemset/problem/520/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(m>n){
		int ans=0;
		while(m>n){
			if(m%2==0) {ans++;m/=2;}
			else{ans+=2;m+=1;m/=2;}
		}
		ans+=n-m;
		cout<<ans<<"\n";
}
else{
	cout<<n-m<<"\n";
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
