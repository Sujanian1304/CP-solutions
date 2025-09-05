/*
 * Problem: C. Choose the Different Ones!
 * URL: https://codeforces.com/problemset/problem/1927/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[m];
	for(int i=0;i<m;i++){
		cin>>arr1[i];
	}
	set<int> st,st1;
	for(int i=0;i<n;i++){
		if(arr[i]<=k) st.insert(arr[i]);
	}
	for(int i=0;i<m;i++){
		if(arr1[i]<=k){
				
			auto it=st.find(arr1[i]);
			if(it!=st.end()) {if(st.size()>k/2) {st.erase(it);st1.insert(arr1[i]);}}
			else st1.insert(arr1[i]);
		}
	}
	
	if(st.size()<k/2||st1.size()<k/2) cout<<"NO\n";
	else cout<<"YES\n";
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
