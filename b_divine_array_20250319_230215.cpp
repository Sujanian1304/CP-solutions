/*
 * Problem: B. Divine Array
 * URL: https://codeforces.com/problemset/problem/1602/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];vector<vector<int>> arr1(sqrt(n),vector<int>(n));
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i*i<=n;i++){
		for(int j=0;j<n;j++){
			if(i==0) arr1[0][j]=arr[j];
			else arr1[i][j]=count(arr1[i-1].begin(),arr1[i-1].end(),arr1[i-1][j]);
		}
	}
	
	int q;
	cin>>q;
	while(q--){
		int a,b;cin>>a>>b;
		if(b*b<=n) cout<<arr1[b][a-1]<<"\n";
		else cout<<arr1[sqrt(n)-1][a-1]<<"\n";
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
