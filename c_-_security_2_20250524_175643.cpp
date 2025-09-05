/*
 * Problem: C - Security 2
 * URL: https://atcoder.jp/contests/abc407/tasks/abc407_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();
    vector<int> suf(n+1,0);
    for(int i=n-1;i>=0;i--){
		int d=s[i]-48;
		int n=suf[i+1];
		int b=(n/10)*10;
		if(b+d<n){b+=10;}
		suf[i]=b+d;
	}
	cout<<suf[0]+n<<"\n";
				
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
