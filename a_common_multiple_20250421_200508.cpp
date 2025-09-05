/*
 * Problem: A. Common Multiple
 * URL: https://codeforces.com/contest/2103/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int prod=1;set<int> p;
    for(int i=0;i<n;i++){
		cin>>arr[i];prod*=arr[i];p.insert(arr[i]);
	}
cout<<p.size()<<"\n";
		
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
