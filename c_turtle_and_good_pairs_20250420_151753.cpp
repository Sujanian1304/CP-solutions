/*
 * Problem: C. Turtle and Good Pairs
 * URL: https://codeforces.com/contest/2003/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    map<char,int> mp;set<char> c;
    for(int i=0;i<n;i++){
		mp[s[i]]++;
		c.insert(s[i]);
	}
	while(!c.empty()){
		for(auto&v:mp){
			if(v.second>0){cout<<v.first;
			v.second--;
			if(v.second==0){auto it=c.find(v.first);if(it!=c.end()){c.erase(it);}};}
		}
	}
	cout<<"\n";
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
