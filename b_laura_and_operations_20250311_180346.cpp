/*
 * Problem: B. Laura and Operations
 * URL: https://codeforces.com/contest/1900/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c;
    cin>>a>>b>>c;int x=0;int y=0;int z=0;
    if((abs(a-b))%2==0){
		//if(c+min(a,b)>=(abs(a-b))/2)
		z=1;
	}
	if((abs(a-c))%2==0){
		//if(b+min(a,c)>=(abs(a-c))/2)
		y=1;
	}
	if((abs(b-c))%2==0){
		//if(a+min(b,c)>=(abs(b-c))/2)
		x=1;
	}
	 cout<<x<<" "<<y<<" "<<z<<"\n";	
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
