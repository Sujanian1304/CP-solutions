/*
 * Problem: C. Penchick and BBQ Buns
 * URL: https://codeforces.com/contest/2031/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2) {
		if(n<27)cout<<"-1\n";
		else {
			cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
			int x=14;
			while(x<=(n-1)/2){
				cout<<x<<" "<<x<<" ";
				x++;
			}
			cout<<"\n";
		}
	}
    else{
		int x=1;
		while(x<=n/2){
			cout<<x<<" "<<x<<" ";
			x++;
		}
		cout<<"\n";
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
