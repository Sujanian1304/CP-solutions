/*
 * Problem: D. Turtle Tenacity: Continual Mods
 * URL: https://codeforces.com/contest/1933/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int m=1e9+1;map<int,int> mp;set<int> st;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		m=min(m,arr[i]);
		mp[arr[i]]++;\
		st.insert(arr[i]);
	}
	sort(arr.begin(),arr.end());
	if(mp[m]==1) cout<<"YES\n";
	else{
		if(mp[m]==n) cout<<"NO\n";
		else{
			int cnt=0;
		for(auto&v:st) if(v%m) cnt++;
		if(cnt>0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	}
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
