/*
 * Problem: B. Summation Game
 * URL: https://codeforces.com/contest/1920/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k,x;cin>>n>>k>>x;
    int arr[n];int prefix[n+1];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	prefix[0]=0;
	for(int i=0;i<n;i++){
		 prefix[i+1]=prefix[i]+arr[i];
	}
	int cnt=0;int ans=-1e9;
	for(int i=n;i>=0;i--){
		if(i-x>=0){
		ans=max(ans,prefix[i-x]-(prefix[i]-prefix[i-x]));
	}else {
		ans=max(ans,(i==0)?0:-prefix[i]);
	}
	if(cnt==k) break;
	cnt++;
	}
	cout<<ans<<"\n";
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
