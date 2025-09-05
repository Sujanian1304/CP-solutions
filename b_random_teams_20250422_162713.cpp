/*
 * Problem: B. Random Teams
 * URL: https://codeforces.com/problemset/problem/478/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int x=n-(m-1);
    int ma=x*(x-1)/2;
    int mi=n/m;int minn=0;int y=n%m;int rem=0;
    minn+=y*(mi*(mi+1)/2);
	minn+=(m-y)*(mi*(mi-1)/2);
	cout<<minn<<" "<<ma;
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
