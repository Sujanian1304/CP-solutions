/*
 * Problem: Flip Prefix
 * URL: https://www.codechef.com/START181D/problems/FLIPPRE
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;int cnt0=0;int cnt1=0;int ans=0;
    for(int i=0;i<n;i++){
		if(s[i]=='0') cnt0++;
		else cnt1++;
		if(cnt0==cnt1) ans++;
	}
	int fans=pow(2,ans);
	cout<<fans<<"\n";
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
