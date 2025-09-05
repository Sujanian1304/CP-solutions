/*
 * Problem: C. XOR and Triangle
 * URL: https://codeforces.com/contest/2074/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n<=4) cout<<"-1\n";
    else{
	
	int msb = 31 - __builtin_clz(n);
			//cout<<msb<<" ";
			int num=0;
			for(int i=msb-1;i>=0;i--){
				num=num+(1<<i);
			}
			if(num+(num^n)>n&&n+(num^n)>num&&n+num>(num^n)){
			cout<<num<<"\n";
			return;
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
