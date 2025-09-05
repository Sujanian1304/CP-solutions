/*
 * Problem: B. Shifts and Sorting
 * URL: https://codeforces.com/problemset/problem/1969/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int ans=0;int cnt1=0;
    for(int i=0;i<s.size();i++){
		if(s[i]=='1') cnt1++;
		else {if(cnt1>0) ans+=cnt1+1;}
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
