/*
 * Problem: B. Same Parity Summands
 * URL: https://codeforces.com/problemset/problem/1352/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(m>n){cout<<"NO\n";return;}
    int x=n/m;int y=n%m;
    if(n%m==0){
		cout<<"YES\n";
		for(int i=0;i<m;i++) cout<<x<<" ";
		cout<<"\n";
	}
	else{
			if((n-m+1)%2&&(n-m+1)>0){
				cout<<"YES\n";
				for(int i=0;i<m-1;i++){cout<<1<<" ";}
				cout<<n-m+1<<"\n";
				return;
			}
			if((n-2*m+2)%2==0&&(n-2*m+2)>0){
				cout<<"YES\n";
				for(int i=0;i<m-1;i++){cout<<2<<" ";}
				cout<<n-2*m+2<<"\n";
				return;
              }
         cout<<"NO\n";
              		 
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
