/*
 * Problem: C - Many Replacement
 * URL: https://atcoder.jp/contests/abc342/tasks/abc342_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    string t="abcdefghijklmnopqrstuvwxyz";
    string z=t;
    
    int q;cin>>q;
    for(int i=0;i<q;i++){
		char a,b;cin>>a>>b;
		if(a==b) continue;
		for(auto&v:z){ if(v==a) v=b;}
	}
	//for(auto&v:mp) cout<<v.first;
	string l="";
	for(auto&v:s){
		for(int i=0;i<26;i++){
			if(v==t[i]){
				//cout<<t[i]<<" "<<z[i]<<"\n";
				l+=z[i];
			}
		}
	}
	cout<<l;
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
