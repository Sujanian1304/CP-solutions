/*
 * Problem: A. Turtle Puzzle: Rearrange and Negate
 * URL: https://codeforces.com/contest/1933/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=abs(arr[i]);
	}
	cout<<sum<<"\n";
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
