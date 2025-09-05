/*
 * Problem: C. Chat Ban
 * URL: https://codeforces.com/problemset/problem/1612/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    if(k<=n*(n+1)/2){
		int lo=1;int hi=n;int ans=0;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(mid*(mid+1)/2>=k){
				ans=mid;
				hi=mid-1;
			}else lo=mid+1;
		}
		cout<<ans<<"\n";
	}
	else{
		int lo=1;int hi=n-1;int x=n*(n+1)/2;int ans=-1;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(x+(n*(n-1)/2-(n-mid-1)*((n-mid-1)+1)/2)>=k){
				ans=mid;
				hi=mid-1;
			}else{
				lo=mid+1;
			}
		}
		if(ans==-1){cout<<2*n-1<<"\n";}
		else cout<<n+ans<<"\n";
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
