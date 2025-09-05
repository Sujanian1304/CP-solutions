/*
 * Problem: C - kasaka
 * URL: https://atcoder.jp/contests/abc237/tasks/abc237_c
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
    int cntl=0;int cntt=0;
    for(int i=0;i<n;i++){
		if(s[i]=='a') cntl++;
		else break;
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='a') cntt++;
		else break;
	}
	if(cntl>cntt) cout<<"No\n";
	else{
		bool flag=1;
		int lo=cntl;int hi=n-cntt-1;
		while(lo<=hi){
			if(s[lo]==s[hi]){lo++;hi--;}
			else {flag=0;break;}
		}
		if(flag) cout<<"Yes\n";
		else cout<<"No\n";
	}
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
