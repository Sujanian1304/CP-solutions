/*
 * Problem: B1. Palindrome Game (easy version)
 * URL: https://codeforces.com/problemset/problem/1527/B1
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
		if(s[i]=='0') cnt++;
	}
   if(cnt==1){cout<<"BOB\n";}
   else if(cnt%2){
	   cout<<"ALICE\n";
   }
   else{cout<<"BOB\n";
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
