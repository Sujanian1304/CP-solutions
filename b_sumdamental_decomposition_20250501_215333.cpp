/*
 * Problem: B. SUMdamental Decomposition
 * URL: https://codeforces.com/contest/2108/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
           int n,m;cin>>n>>m;
    if(n==1){
		if(m==0){cout<<"-1\n";}
		else cout<<m<<"\n";
		return;
	}
    int sum=0;
    for(int i=0;i<31;i++){
		if(1LL&(m>>i)){ sum+=(1<<i);}
		}
		int x=__builtin_popcountll(m);
		if(x<n){
			if(1LL&m){if((n-x)%2){
				if((n-x)+1<n)sum+=(n-x)+1;
				else{sum+=(n-x)+3;}
				}
				else sum+=(n-x);}
			else{
				if((n-x)%2){
				 if((n-x)+1<n)sum+=(n-x)+1;
				  else{sum+=(n-x)+3;}
					}else sum+=(n-x);}
			}
	cout<<sum<<"\n";
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
