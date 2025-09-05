/*
 * Problem: A. Vadim's Collection
 * URL: https://codeforces.com/contest/2098/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    map<int,int>mp;
    for(int i=0;i<n;i++){
		mp[(s[i]-48)]++;
		//cout<<s[i]-48<<" ";
	}
	vector<int> t;
	for(int i=0;i<n;i++){
		int x=10-(i+1);
		for(int j=x;j<10;j++){
			if(mp[j]>0){t.push_back(j);mp[j]--;break;}
		}
	}
	for(auto&v:t) cout<<v;
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
