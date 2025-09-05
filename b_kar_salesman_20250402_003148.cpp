/*
 * Problem: B. Kar Salesman
 * URL: https://codeforces.com/contest/2022/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];int ma=0;int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		ma=max(ma,arr[i]);
		sum+=arr[i];	
	}
	int lo=1;int hi=max(n,ma);int ans=0;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(mid*m>=sum){
			ans=mid;
			hi=mid-1;
		}
		else lo=mid+1;
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
