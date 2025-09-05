/*
 * Problem: D. Super-Permutation
 * URL: https://codeforces.com/contest/1822/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2){
		if(n==1) cout<<"1\n";
		else  cout<<"-1\n";
	}
	else{
		int x=2;int y=n-1;
		cout<<n<<" ";
		for(int i=0;i<n-1;i++){
			if(i%2==0) {cout<<y<<" ";y-=2;}
			else {cout<<x<<" ";x+=2;}
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
