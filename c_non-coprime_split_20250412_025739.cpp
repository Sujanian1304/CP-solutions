/*
 * Problem: C. Non-coprime Split
 * URL: https://codeforces.com/contest/1872/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
   if(n==2){n++;}
    while(n%2!=0&&n<m){
		n++;
		if(n==2) n++;
	}
	if(n%2==0) {
		if(n/2==1) cout<<"-1\n";
		else cout<<n/2<<" "<<n/2<<"\n";
	}
	else{
		for(int i=3;i*i<=n;i++){
			if(__gcd(i,n-i)!=1){ cout<<i<<" "<<n-i<<"\n";return;}
		}
		cout<<"-1\n";
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
