/*
 * Problem: Beautiful Garden
 * URL: https://www.codechef.com/START182C/problems/DPF
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
   int sum=0;
   for(int i=0;i<n;i++){
       sum+=(k-1)/arr[i]+1;
   }
   int ma=k*(n-m);
   cout<<min(sum,ma)<<"\n";
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
