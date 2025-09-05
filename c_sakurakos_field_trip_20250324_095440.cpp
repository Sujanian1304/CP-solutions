/*
 * Problem: C. Sakurako's Field Trip
 * URL: https://codeforces.com/contest/2033/problem/C
 * Time Limit: 2.0 seconds
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
	}
	for(int i=0;i<n/2-1;i++){
		if(arr[i]==arr[i+1]||arr[n-i-1]==arr[n-i-2]){
			swap(arr[i+1],arr[n-i-2]);
		}
  }
  int cnt=0;
	for(int i=1;i<n;i++){
		//cout<<arr[i]<<" ";
		if(arr[i]==arr[i-1]) cnt++;
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
