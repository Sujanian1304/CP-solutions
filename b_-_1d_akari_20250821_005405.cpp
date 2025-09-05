/*
 * Problem: B - 1D Akari
 * URL: https://atcoder.jp/contests/abc416/tasks/abc416_b
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
    for(int i=1;i<(int)s.size();i++){
		if(s[i]=='#'){
			for(int j=i-1;j>=0;j--){
				if(s[j]!='#'){
					s[j]='o';
					break;
				}
			}
		}
	}
	if(s[n-1]!='#'){
		s[n-1]='o';
	}
	cout<<s<<"\n";
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
