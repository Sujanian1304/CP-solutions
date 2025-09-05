/*
 * Problem: B. Maximum Sum
 * URL: https://codeforces.com/contest/1946/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    int arr[n];int fsum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		fsum+=arr[i];
	}
	int sum=arr[0];
	int ans=arr[0];
	
	for(int i=1;i<n;i++){
		sum=max(arr[i],sum+arr[i]);
		ans=max(sum,ans);
	}
	ans=max(ans,0LL);
	//cout<<ans<<" ";
	fsum=(fsum-ans)%mod;
	//ans=(ans*(1LL<<m))%mod;
	while(m--){
		ans=(ans*2)%mod;
	}
	ans=(ans+fsum)%mod;
	ans=((ans%mod)+mod)%mod;
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
