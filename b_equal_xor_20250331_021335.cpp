/*
 * Problem: B. Equal XOR
 * URL: https://codeforces.com/problemset/problem/1944/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n), arr1(n);
    map<int, int> mp, mp1;vector<int> ans, ans1;
    ans.reserve(2*m);
    ans1.reserve(2*m);
    int cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]]==2&& cnt<2*m) {ans.push_back(arr[i]);ans.push_back(arr[i]);cnt+=2;}
    }
    cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        mp1[arr1[i]]++;
        if(mp1[arr1[i]]==2&&cnt<2*m) {ans1.push_back(arr1[i]);ans1.push_back(arr1[i]);cnt+=2;}
    }
	if(cnt==2*m){
	for(auto&v:ans) cout<<v<<" ";
	cout<<"\n";
	for(auto&v:ans1) cout<<v<<" ";
	cout<<"\n";
}
else{
	for(int i=0;i<n;i++){
		if(cnt==2*m) break;
		if(mp[arr[i]]==1) {ans.push_back(arr[i]);ans1.push_back(arr[i]);cnt++;}
	}
	for(auto&v:ans) cout<<v<<" ";
	cout<<"\n";
	for(auto&v:ans1) cout<<v<<" ";
	cout<<"\n";
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
