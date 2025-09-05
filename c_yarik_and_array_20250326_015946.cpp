/*
 * Problem: C. Yarik and Array
 * URL: https://codeforces.com/problemset/problem/1899/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}int fans=arr[0];int ans=arr[0];int sum=arr[0];
	for(int i=1;i<n;i++){
	   if((arr[i]&1LL)!=(arr[i-1]&1LL)){
		   //cout<<arr[i]<<" ";
		   ans=max(sum+arr[i],sum);
		   sum+=arr[i];
	   }else{
		   ans=arr[i];
	   }
	   fans=max(fans,ans);
	}
	cout<<fans<<"\n";
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
