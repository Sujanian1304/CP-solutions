/*
 * Problem: C. Simple Repetition
 * URL: https://codeforces.com/contest/2093/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(n>1) {
		if(m==1){
			if(n<2) cout<<"NO\n";
		else{
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0) {cout<<"NO\n";return;}
			}
			cout<<"YES\n";
		}
	}else{
			cout<<"NO\n";
		}
	}
    else{
		int x=0;
		for(int i=0;i<m;i++){
			x+=pow(10,m-1-i);
		}
		//cout<<x;
		if(x<2) cout<<"NO\n";
		else{
			for(int i=2;i<=sqrt(x);i++){
				if(x%i==0) {cout<<"NO\n";return;}
			}
			cout<<"YES\n";
		}
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
