/*
 * Problem: Sum to 0
 * URL: https://www.codechef.com/START184C/problems/SUM0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2==0){
		for(int i=0;i<n/2;i++){
			cout<<1<<" "<<-1<<" ";
		}
		cout<<"\n";
	}else{
		if(n==1){cout<<"-1\n";}
		else {
			cout<<1<<" "<<2<<" "<<-3<<" ";
			int x=n-3;
			for(int i=0;i<x/2;i++){
				cout<<1<<" "<<-1<<" ";
			}
			cout<<"\n";
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
