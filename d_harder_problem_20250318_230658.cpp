/*
 * Problem: D. Harder Problem
 * URL: https://codeforces.com/problemset/problem/2044/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans(n);map<int,int> mp;set<int> st;
	for(int i=1;i<=n;i++){st.insert(i);}
	for(int i=0;i<n;i++){
		if(i==0) {ans[i]=arr[i];mp[arr[i]]++;if(st.find(arr[i])!=st.end()){st.erase(arr[i]);}}
		else{
			if(mp[arr[i]]==0){
				ans[i]=arr[i];
				if(st.find(arr[i])!=st.end()){st.erase(arr[i]);}
				mp[arr[i]]++;
			}else{
				ans[i]=*st.rbegin();
				mp[*st.rbegin()]++;
				st.erase(*st.rbegin());
			}
		}
	}
	for(auto&v:ans) cout<<v<<" ";
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
