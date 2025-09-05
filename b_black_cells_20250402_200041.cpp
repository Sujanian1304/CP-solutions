/*
 * Problem: B. Black Cells
 * URL: https://codeforces.com/contest/2026/problem/B
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
	if(n%2){
		int fans=1e18;
		auto func=[&](vector<int>arr){
	      sort(arr.begin(),arr.end());
	      for(int i=1;i<arr.size();i++){
		    if(arr[i]==arr[i-1]) return;}
	      int res=0;
	    for(int i=0;i<arr.size();i+=2){
	     	res=max(res,arr[i+1]-arr[i]);
	      }
	    fans=min(fans,res);
};
   
		for(int i=0;i<n;i++){
			for(auto&x:{-1,1}){
				arr.push_back(arr[i]+x);
				func(arr);
				arr.pop_back();
			}
		}
	cout<<fans<<"\n";
	}else{
		int ans=0;
		for(int i=0;i<n;i+=2){
			ans=max(ans,arr[i+1]-arr[i]);
		}
		cout<<ans<<"\n";
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
