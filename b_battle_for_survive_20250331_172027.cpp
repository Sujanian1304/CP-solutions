/*
 * Problem: B. Battle for Survive
 * URL: https://codeforces.com/contest/2013/problem/B
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
	}
	if(n>2){
	int s=0;
	for(int i=n-2;i>0;i--){
		s=(arr[i]-arr[i-1]);
		arr[i-1]=s;
	}
	cout<<arr[n-1]-s<<"\n";
}else{
	cout<<arr[1]-arr[0]<<"\n";
}
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
