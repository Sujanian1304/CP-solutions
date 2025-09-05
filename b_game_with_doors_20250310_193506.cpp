/*
 * Problem: B. Game with Doors
 * URL: https://codeforces.com/contest/2004/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int l,r;cin>>l>>r;
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(r<n) ans=1;
    else if(r==n) {ans=2;}
    else {
		if(r==m){
			if(l==n) ans=abs(m-n);
			else if(n>l)ans=abs(m-n)+1;
			else if(n<l) ans=abs(r-l)+1;
		}else if(r<m){
			if(n<l){
				ans=abs(r-l)+2;
			}
			else if(n>l) ans=abs(r-n)+2;
			else if(n==l) ans=abs(r-l)+1;
		 }
		 else{
			 if(n==l) ans=abs(m-n)+1;
			 else if(l<n) {
				 if(l<m)ans=abs(m-n)+2;
				 else if(l==m) ans=2;
				 else if(l>m) ans=abs(m-l)+2;
			 }
			 else if(l>n) ans=abs(m-l)+1;
		 }
	 }
	 cout<<ans<<"\n";
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
