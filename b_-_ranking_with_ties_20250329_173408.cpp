/*
 * Problem: B - Ranking with Ties
 * URL: https://atcoder.jp/contests/abc399/tasks/abc399_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int arr1[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
		arr1[i]=arr[i];
	}
	map<int,int> mp,mp1;
	sort(arr1,arr1+n);
	reverse(arr1,arr1+n);
	for(int i=0;i<n;i++){
		
		if(mp1[arr1[i]]==0){mp[arr1[i]]=i+1;mp1[arr1[i]]++;}
	}
	for(int i=0;i<n;i++){
		cout<<mp[arr[i]]<<"\n";
	}
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
