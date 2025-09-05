/*
 * Problem: B. Chip and Ribbon
 * URL: https://codeforces.com/contest/1901/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int prefix[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=0){
			if(arr[i]<=arr[i-1])prefix[i]=prefix[i-1];
			else {
				prefix[i]=prefix[i-1]+(arr[i]-arr[i-1]);
			}
		}
		else{
			prefix[i]=arr[i]-1;
		}
	}
     cout<<prefix[n-1]<<"\n";
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
