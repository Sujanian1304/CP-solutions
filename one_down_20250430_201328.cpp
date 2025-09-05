/*
 * Problem: One Down
 * URL: https://www.codechef.com/START184C/problems/FSTS
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s,t;cin>>s>>t;
    int cnt=0;
    for(int i=0;i<n;i++){
		if(s[i]!=t[i]){
			if(s[i]=='0'){cout<<"No\n";return;}
			else cnt++;
		}
	}
	if(cnt%2){cout<<"No\n";}
	else cout<<"Yes\n";
	
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
