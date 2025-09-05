/*
 * Problem: B. GCD Partition
 * URL: https://codeforces.com/problemset/problem/1780/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int prefix[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=0)prefix[i]=prefix[i-1]+arr[i];
		else prefix[i]=arr[i];
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		ans=max(ans,__gcd(prefix[i],prefix[n-1]-prefix[i]));
	}
	if(ans==0) cout<<"1\n";
	else cout<<ans<<"\n";
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
