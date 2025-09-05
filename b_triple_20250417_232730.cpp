/*
 * Problem: B. Triple
 * URL: https://codeforces.com/contest/1669/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);map<int,int> mp;int ans=-1;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		if(mp[arr[i]]==3) ans=arr[i];
	}
	cout<<ans<<"\n";
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
