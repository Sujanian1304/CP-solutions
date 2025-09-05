/*
 * Problem: B. Block Towers
 * URL: https://codeforces.com/contest/1767/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;vector<int> a(n),b(n-1);
    for(int i=0;i<n;i++){cin>>a[i];if(i>0) b[i-1]=a[i];}
    sort(b.begin(),b.end());
    int ans=a[0];
    for(int i=0;i<n-1;i++){
		if(b[i]>a[0]){
			int x=((b[i]-a[0])+1)/2;
			a[0]+=x;
		}
		ans=a[0];
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
