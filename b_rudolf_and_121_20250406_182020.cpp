/*
 * Problem: B. Rudolf and 121
 * URL: https://codeforces.com/contest/1941/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int x=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(arr[x]==0) x++;
	for(int i=x;i<n-2;i++){
		arr[i+1]-=arr[i]*2;
		arr[i+2]-=arr[i];
		arr[i]=0;
		if(arr[i+1]<0||arr[i+2]<0) {cout<<"NO\n";return;}
	}
	for(auto&v:arr) if(v!=0) {cout<<"NO\n";return;}
	cout<<"YES\n";
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
