/*
 * Problem: D. Subtract Min Sort
 * URL: https://codeforces.com/problemset/problem/2060/D
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
	}bool flag=1;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){flag=0;break;}
		else if(arr[i]<arr[i+1]){arr[i+1]-=arr[i];arr[i]=0;}
		else{arr[i+1]=0;arr[i]=0;}
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
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
