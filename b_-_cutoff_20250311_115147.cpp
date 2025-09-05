/*
 * Problem: B - Cutoff
 * URL: https://atcoder.jp/contests/abc321/tasks/abc321_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(int i=0;i<=100;i++){
		int brr[n];
		for(int j=0;j<n-1;j++){
			brr[j]=arr[j];
		}
		brr[n-1]=i;
		sort(brr,brr+n);
		int sum=accumulate(brr+1,brr+n-1,0);
		//cout<<sum<<" ";
		if(sum>=m){
			cout<<i;
			return;
		}
	}
	cout<<"-1";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
