/*
 * Problem: B. Lecture
 * URL: https://codeforces.com/problemset/problem/499/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++){
		string a,b;cin>>a>>b;
		if(a.size()==b.size()){mp[a]=a;}
		else if(a.size()<b.size()) mp[a]=a;
		else mp[a]=b;
	}
	vector<string> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<mp[arr[i]]<<" ";
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
