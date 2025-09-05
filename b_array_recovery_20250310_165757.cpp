/*
 * Problem: B. Array Recovery
 * URL: https://codeforces.com/contest/1739/problem/B
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
	}vector<int> ans(n);ans[0]=arr[0];bool flag=1;
	for(int i=1;i<n;i++){
	     if(arr[i]==0){ans[i]=ans[i-1];}
	     else {
			 if(ans[i-1]>=arr[i]){flag=0;break;}
			 else {ans[i]=arr[i]+ans[i-1];}
	 }
 }
	 if(flag){
		 for(auto&v:ans) cout<<v<<" ";
		 cout<<"\n";
	 }else{
		 cout<<"-1\n";
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
