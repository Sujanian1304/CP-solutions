/*
 * Problem: G1. Subsequence Addition (Easy Version)
 * URL: https://codeforces.com/problemset/problem/1807/G1
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
	sort(arr,arr+n);
	int prefix[n];
	prefix[0]=1;
	if(arr[0]!=1) cout<<"NO\n";
	else{
		bool flag=1;
		for(int i=1;i<n;i++){
			if(prefix[i-1]>=arr[i]) prefix[i]=prefix[i-1]+arr[i];
			else {flag=0;break;}
		}
		cout<<((flag)?"yes\n":"no\n");
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
