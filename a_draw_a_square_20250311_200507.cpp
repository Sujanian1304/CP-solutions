/*
 * Problem: A. Draw a Square
 * URL: https://codeforces.com/contest/2074/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b==a+d==b+c==b+d){
		cout<<"Yes\n";
	}
	else {
		cout<<"No\n";
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
