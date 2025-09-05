/*
 * Problem: A. Username
 * URL: https://codeforces.com/problemset/problem/1910/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int j=0;int k=0;
    for(int i=0;i<s.size();i++){
		if(s[i]>97) {j=i;break;}
	}
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>97) {k=i;break;}
	}
	string t=s.substr(j,(k-j+1));
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
