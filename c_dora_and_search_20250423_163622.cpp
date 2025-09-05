/*
 * Problem: C. Dora and Search
 * URL: https://codeforces.com/problemset/problem/1793/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
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
	int l=0;int r=n-1;
	int mn=1;int mx=n;
	while(l<=r){
		if(arr[l]==mn){
			l++;mn++;
		}else if(arr[l]==mx){
			l++;mx--;
		}else if(arr[r]==mn){
			r--;mn++;
		}else if(arr[r]==mx) {
			r--;mx--;
		}else break;
	}
	if(l<=r){cout<<l+1<<" "<<r+1<<"\n";}
	else cout<<"-1\n";
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
