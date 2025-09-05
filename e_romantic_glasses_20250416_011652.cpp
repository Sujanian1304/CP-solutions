/*
 * Problem: E. Romantic Glasses
 * URL: https://codeforces.com/contest/1915/problem/E
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> p(n);map<int,int>  mp;bool valid=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i%2) arr[i]=-arr[i];
		if(i==0)p[i]=arr[i];
		else p[i]=arr[i]+p[i-1];
		mp[p[i]]++;
		if(mp[p[i]]>1||p[i]==0) valid=1;
	}
	if(valid) cout<<"YES\n";
	else cout<<"NO\n";
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
