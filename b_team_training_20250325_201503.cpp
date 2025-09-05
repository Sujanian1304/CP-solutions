/*
 * Problem: B. Team Training
 * URL: https://codeforces.com/contest/2091/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int cnt=0;int y=0;
   for(int i=n-1;i>=0;i--){
		    y++;
		   if(1LL*arr[i]*y>=x){
			   cnt++;
			   y=0;
		   }
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
