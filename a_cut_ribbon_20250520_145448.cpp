/*
 * Problem: A. Cut Ribbon
 * URL: https://codeforces.com/problemset/problem/189/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,a,b,c;cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i<=4000;i++){
		for(int j=0;j<=4000;j++){
			if((n-a*i-b*j)%c==0&&(n-a*i-b*j)>=0){
				ans=max(ans,i+j+(n-a*i-b*j)/c);
			}
		}
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
