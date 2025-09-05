/*
 * Problem: B. Young Explorers
 * URL: https://codeforces.com/problemset/problem/1355/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);map<int,int> mp;
    for(int i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
    int g=0;vector<int> b;
    for(auto&v:mp){
		g+=v.second/v.first;
		int x=v.second%v.first;
		while(x--) b.push_back(v.first);
	}
	int j=0;
	for(int i=0;i<(int)b.size();i++){
		j++;
		if(j==b[i]){g++;j=0;}
	}
	cout<<g<<"\n";
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
