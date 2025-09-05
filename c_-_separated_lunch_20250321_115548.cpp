/*
 * Problem: C - Separated Lunch
 * URL: https://atcoder.jp/contests/abc374/tasks/abc374_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a;cin>>a;
    int arr[a];int fsum=0;
    for(int i=0;i<a;i++){
		cin>>arr[i];
		fsum+=arr[i];
	}int ans=1e18;
	for(int i=0;i<=(1<<a);i++){
		int sum=0;
		for(int j=0;j<a;j++){
			if((i>>j)&1LL){
				sum+=arr[j];
			}
		}
		ans=min(ans,max(sum,fsum-sum));
	}
	cout<<ans<<"\n";
				
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
