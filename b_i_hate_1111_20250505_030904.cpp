/*
 * Problem: B. I Hate 1111
 * URL: https://codeforces.com/problemset/problem/1526/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int i=1;
    if(n%11==0){cout<<"YES\n";return;}
     while(i*111<=n){
		 if((n-i*111)%11==0){cout<<"YES\n";return;}
		 i++;
	 }
		cout<<"NO\n"; 
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
