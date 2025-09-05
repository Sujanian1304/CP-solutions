/*
 * Problem: C. Long Multiplication
 * URL: https://codeforces.com/problemset/problem/1954/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;cin>>s>>t;
    int n=s.size();int x=0;
		 for(int i=0;i<n;i++){
			 if(s[i]==t[i]) continue;
			if(s[i]<t[i]) {swap(s[i],t[i]);x=i+1;break;}
			if(s[i]>t[i]) {x=i+1;break;}
	}
      for(int i=x;i<n;i++){
			if(s[i]>t[i]) {swap(s[i],t[i]);}
	}
		cout<<s<<"\n";
		cout<<t<<"\n";
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
