/*
 * Problem: B. Getting Points
 * URL: https://codeforces.com/contest/1902/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,p,l,t;cin>>n>>p>>l>>t;
    if(n==1) cout<<"0\n";
    else{
		int lo=0;int hi =n;
		int ans=-1;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(mid*l+min((n+6)/7,2*mid)*t>=p){
				ans=mid;
				hi=mid-1;
			}else{
				lo=mid+1;
			}
		}
		cout<<n-ans<<"\n";
		
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
