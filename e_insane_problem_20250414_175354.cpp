/*
 * Problem: E. Insane Problem
 * URL: https://codeforces.com/contest/2044/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
	if(a==0) return 1;
	else if(b%2) return a*binpow(a,b-1);
	else {
		int ans=binpow(a,b/2);
		return ans*ans;
	}
}
void solve() {
    // Your solution here
    int n,l1,r1,l2,r2;
    cin>>n>>l1>>r1>>l2>>r2;
     int k=1;int cnt=0;
     while(k<=r2/l1){
		 int lo=max(l1,(l2+k-1)/k);
		 int hi=min(r1,r2/k);
		 if(hi>=lo) cnt+=hi-lo+1;
		 if(k>r2/l1) break;
		 k*=n;
	 }
	 cout<<cnt<<"\n";
		 
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
