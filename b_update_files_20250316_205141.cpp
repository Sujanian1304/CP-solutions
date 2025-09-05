/*
 * Problem: B. Update Files
 * URL: https://codeforces.com/contest/1606/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    if(b==1) cout<<a-1<<"\n";
    else{
       int x=1;int ans=1;int i=0;
       while(x<b){
		   ans+=x;
		   x=x*2;
		   i++;
	   }
	   cout<<i+((a-ans)+b-1)/b<<"\n";
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
