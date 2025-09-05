/*
 * Problem: D. Divide and Equalize
 * URL: https://codeforces.com/problemset/problem/1881/D
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
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int x=arr[i];
		while(x%2==0){
			mp[2]++;
			x/=2;
		}
		if(x==1) continue;
		for(int j=3;j*j<=x;j++){
			while(x%j==0) {mp[j]++;x/=j;}
		}
		if(x>2){mp[x]++;}
	}
	for(auto&v:mp){if(v.second%n!=0){cout<<"NO\n";return;}
	}
	cout<<"YES\n";
			
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
