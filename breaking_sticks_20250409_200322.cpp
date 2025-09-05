/*
 * Problem: Breaking Sticks
 * URL: https://www.codechef.com/START181D/problems/BRKSTICK
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int ans=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		ans+=((arr[i]>1)?arr[i]-1:0);
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
