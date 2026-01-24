/*
 * Problem: D - Swap and Range Sum
 * URL: https://atcoder.jp/contests/abc442/tasks/abc442_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,q;cin>>n>>q;
    vector<int> a(n);
    vector<int> presum(n);
    for(int i=0;i<n;i++){
     cin>>a[i];
     if(i==0) presum[i]=a[i];
     else presum[i]=presum[i-1]+a[i];
     }
     for(int i=0;i<q;i++){
		 int x;cin>>x;
		 if(x==1){
			 int y;cin>>y;
			 presum[y-1]=((y>=2)?presum[y-2]:0)+a[y];
			 presum[y]=presum[y-1]+a[y-1];
			 swap(a[y],a[y-1]);
		 }else{
			 int c,d;cin>>c>>d;int ans=0;
			 if(c>1) ans=presum[d-1]-presum[c-2];
			 else ans=presum[d-1];
			 cout<<ans<<"\n";
		 }
	 }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
