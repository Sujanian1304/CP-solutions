/*
 * Problem: B. Index and Maximum Value
 * URL: https://codeforces.com/contest/2007/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<m;i++){
		char a;int b,c;
		cin>>a>>b>>c;
		if(c<arr[n-1]) cout<<arr[n-1]<<" ";
		else{
			if(b<=arr[n-1]) {
				if(a=='+') {arr[n-1]++;cout<<arr[n-1]<<" ";}
				else {arr[n-1]--;cout<<arr[n-1]<<" ";}
			}
			else cout<<arr[n-1]<<" ";
		}
	}
	cout<<"\n";
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
