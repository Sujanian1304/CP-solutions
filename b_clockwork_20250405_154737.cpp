/*
 * Problem: B. Clockwork
 * URL: https://codeforces.com/contest/2062/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n%2){
	vector<int> brr(n);
	for(int i=0;i<=n/2;i++){
		brr[i]=(n-1-i)*2+1;
		brr[n-1-i]=brr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]<brr[i]) {cout<<"NO\n";return;}
	}
	cout<<"YES\n";
}
else{
	int x=(n-1)*2+1;
	for(int i=0;i<n/2;i++){
		if(arr[i]<x||arr[n-1-i]<x) {cout<<"NO\n";return;}
		x-=2;
	}
	cout<<"YES\n";
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
