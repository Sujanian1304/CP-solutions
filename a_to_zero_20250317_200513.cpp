/*
 * Problem: A. To Zero
 * URL: https://codeforces.com/contest/2075/problem/0
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;int ans=0;
    if(n%2){
		ans+=1;
		n=n-k;
		ans+=(n+(k-1)-1)/(k-1);
		cout<<ans<<"\n";
	}
	else{
		ans+=(n+(k-1)-1)/(k-1);
		cout<<ans<<"\n";
	}
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
