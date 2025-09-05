/*
 * Problem: B. Fun Game
 * URL: https://codeforces.com/problemset/problem/1994/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;string t;
    cin>>s>>t;
    if(s[0]!=t[0]&&(s[0]=='0')) cout<<"no\n";
    else{
		bool flag=1;
		int cnt1=0;int cnt0=0;
		for(int i=0;i<n;i++){
			if(s[i]==t[i]) {(s[i]=='0')?cnt0++:cnt1++;}
			else {
				if(s[i]=='0'){
					if(cnt1==0) {flag=0;break;}
					else {
						cnt0++;
					}
				}else if(s[i]=='1'){
					cnt1++;
				}
			}
		}
		if(flag) cout<<"Yes\n";
		else cout<<"no\n";
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
