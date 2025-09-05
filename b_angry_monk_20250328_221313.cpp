/*
 * Problem: B. Angry Monk
 * URL: https://codeforces.com/contest/1992/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int sum=0;
	for(int i=0;i<m-1;i++){
		sum+=(2*arr[i])-1;
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
