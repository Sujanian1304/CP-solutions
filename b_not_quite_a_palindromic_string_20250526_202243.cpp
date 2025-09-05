/*
 * Problem: B. Not Quite a Palindromic String
 * URL: https://codeforces.com/contest/2114/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;cin>>s;
    int cnt0=0;
    for(int i=0;i<n;i++){
		if(s[i]=='0') cnt0++;
	}
	int l=n-cnt0;
	int p=n/2;
	int b=p-m;
	if(b>=0&&b<=min(cnt0,l)&&((cnt0-b)%2==0)){
		cout<<"YES\n";
	}else{
		cout<<"No\n";
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
