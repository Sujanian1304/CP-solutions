/*
 * Problem: A - AtCoder Language
 * URL: https://atcoder.jp/contests/abc419/tasks/abc419_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    if(s=="red"){
		cout<<"SSS\n";
	}else if(s=="blue"){
		cout<<"FFF\n";
	}else if(s=="green")
	{
		cout<<"MMM\n";
	}else{
		cout<<"Unknown\n";
	}
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
