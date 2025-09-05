/*
 * Problem: B. T-primes
 * URL: https://codeforces.com/problemset/problem/230/B
 * Time Limit: 2.0 seconds
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
	for(int i=0;i<n;i++){
		int cnt=0;
		int x=sqrt(arr[i]);
		if(x*x==arr[i]){
			for(int j=2;j*j<=x;j++){
				if(arr[i]%j==0){cnt++;break;}
			}t-p
			if(cnt==0&&arr[i]>1){
				cout<<"YES\n";
			}else cout<<"NO\n";
		}else{
			cout<<"NO\n";
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
