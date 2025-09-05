/*
 * Problem: B. Normal Problem
 * URL: https://codeforces.com/problemset/problem/2044/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    for(int i=0;i<n;i++){
		if(s[i]=='p') s[i]='q';
		else if(s[i]=='q') s[i]='p';
	}
	reverse(s.begin(),s.end());
	cout<<s<<"\n";
}

int main() {
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
