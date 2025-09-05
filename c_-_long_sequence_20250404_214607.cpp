/*
 * Problem: C - Long Sequence
 * URL: https://atcoder.jp/contests/abc220/tasks/abc220_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	int x;cin>>x;
	int y=x/sum;
	int z=x%sum;
	int cnt=y*n;
	int s=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
		if(s>z) break;
		cnt++;
	}
	cout<<cnt+1<<"\n";
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
