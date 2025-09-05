/*
 * Problem: B. 378QAQ and Mocha's Array
 * URL: https://codeforces.com/problemset/problem/1975/B
 * Time Limit: 1.0 seconds
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
    vector<int> arr1;
    for(int i=1;i<n;i++){
		if(arr[i]%arr[0]) arr1.push_back(arr[i]);
	}
	if(arr1.size()==0) cout<<"YES\n";
	else{
	sort(arr1.begin(),arr1.end());
	vector<int> arr2;
    for(int i=1;i<arr1.size();i++){
		if(arr1[i]%arr1[0]) arr2.push_back(arr1[i]);
	}
	if(arr2.size()==0) cout<<"YES\n";
	else cout<<"NO\n";
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
