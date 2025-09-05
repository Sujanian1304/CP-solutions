/*
 * Problem: B. Petr and a Combination Lock
 * URL: https://codeforces.com/problemset/problem/1097/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<(1<<n);i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(1LL&(i>>j)) sum+=arr[j];
			else sum-=arr[j];
		}
		if(abs(sum)%360==0) {cout<<"YES\n";return;}
	}

	cout<<"NO\n";
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
