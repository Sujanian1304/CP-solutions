/*
 * Problem: A. Cards
 * URL: https://codeforces.com/contest/1220/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int cntz=0;int cnto=0;
    for(int i=0;i<n;i++){
		if(s[i]=='z') cntz++;
		else if(s[i]=='n') cnto++;
	}
	while(cnto>0){
		cout<<1<<" ";
		cnto--;
	}
	while(cntz>0){
		cout<<0<<" ";
		cntz--;
	}
	cout<<"\n";
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
