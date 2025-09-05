/*
 * Problem: A. Oleg and shares
 * URL: https://codeforces.com/problemset/problem/793/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
     vector<int> a(n);
     for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 int ans=0;
	 sort(a.begin(),a.end());
	 for(int i=1;i<n;i++){
		 if((a[i]-a[0])%k!=0){cout<<"-1\n";return;}
		 ans+=(a[i]-a[0])/k;
	 }
	 cout<<ans<<"\n";
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
