/*
 * Problem: B. Inflation
 * URL: https://codeforces.com/problemset/problem/1476/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=a[0];
    int ans=0;
    for(int i=1;i<n;i++){
		if(a[i]*100>m*sum){
			int c=a[i]*100;
			int req=(c+m-1)/m;
			int add=req-sum;
			ans+=add;
			sum+=add;
		}
		sum+=a[i];
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
