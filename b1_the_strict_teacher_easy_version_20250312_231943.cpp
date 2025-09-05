/*
 * Problem: B1. The Strict Teacher (Easy Version)
 * URL: https://codeforces.com/contest/2005/problem/B1
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c;
    cin>>a>>b>>c;
    int t1,t2;cin>>t1>>t2;
    int q1;cin>>q1;
    if(q1>t1&&q1>t2) cout<<a-max(t1,t2) <<"\n";
    else if(q1<t1&&q1<t2) cout<<min(t1,t2)-1<<"\n";
    else{
		 cout<<(abs(t2-t1))/2<<"\n";
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
