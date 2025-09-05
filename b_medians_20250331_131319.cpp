/*
 * Problem: B. Medians
 * URL: https://codeforces.com/problemset/problem/2032/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(m==1){
		if(n==1) {cout<<"1\n";cout<<"1\n";}
		else cout<<"-1\n";
		}
    else if(m==n)  cout<<"-1\n";
     else{
			cout<<"3\n";
			if(m%2==0){
			cout<<"1 "<<m<<" "<<m+1<<"\n";}
			else{
				cout<<"1 "<<m-1<<" "<<m+2<<"\n";
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
