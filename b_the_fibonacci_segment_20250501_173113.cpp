/*
 * Problem: B. The Fibonacci Segment
 * URL: https://codeforces.com/problemset/problem/365/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n<=2){cout<<n<<"\n";return;}
    int ans=0;int len=2;
    for(int i=2;i<n;i++){
		if(a[i]==a[i-1]+a[i-2]){len++;}
		else{
			ans=max(ans,len);
			len=2;
		}
	}
	ans=max(len,ans);
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
