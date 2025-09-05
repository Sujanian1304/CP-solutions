/*
 * Problem: B. Omkar and Last Class of Math
 * URL: https://codeforces.com/problemset/problem/1372/B
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
		cout<<n/2<<" "<<n/2<<"\n";
	}else{
		int ans=0;
		for(int i=2;i*i<=n;i++){
			if(n%i==0) {ans=i;break;}
		}
		if(ans==0) {cout<<1<<" "<<n-1<<"\n";}
		else{
			int x=max(ans,n/ans);
			cout<<x<<" "<<n-x<<"\n";
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
