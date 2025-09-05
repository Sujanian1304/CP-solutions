/*
 * Problem: B. Vicious Labyrinth
 * URL: https://codeforces.com/contest/2078/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    if(m%2){
		int x=n-1;
		while(x--){
			cout<<n<<" ";
		}
		cout<<n-1<<"\n";
	}else {
		int x=n-2;
		while(x--){
			cout<<n-1<<" ";
		}
		cout<<n<<" "<<n-1<<"\n";
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
