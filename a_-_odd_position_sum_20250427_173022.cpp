/*
 * Problem: A - Odd Position Sum
 * URL: https://atcoder.jp/contests/abc403/tasks/abc403_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i%2==0) sum+=arr[i];
	}
    cout<<sum<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
