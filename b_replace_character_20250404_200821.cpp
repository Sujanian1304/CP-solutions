/*
 * Problem: B. Replace Character
 * URL: https://codeforces.com/contest/2047/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;string s;cin>>s;
    map<char,int> mp;int m=0;
    for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	char t;int mi=1e9;
	for(auto&v:mp){
		if(v.second>m){
			t=v.first;
			m=v.second;
		}
		mi=min(mi,v.second);
	}
	if(mi<m){
	for(int i=0;i<n;i++){
		if(mp[s[i]]==mi) {s[i]=t;break;}
	}
}else {
	for(int i=0;i<n;i++){
		if(s[i]!=t) {s[i]=t;break;}
	}
}
	cout<<s<<"\n";
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
