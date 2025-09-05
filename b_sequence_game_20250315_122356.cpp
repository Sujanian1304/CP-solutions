/*
 * Problem: B. Sequence Game
 * URL: https://codeforces.com/contest/1862/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int cnt=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]!=1) cnt++; 
	}
	vector<int>ans;
    for(int i=0;i<n;i++){
		if(arr[i]==1) ans.push_back(arr[i]);
		else {
			if(i!=n-1){
			if(arr[i+1]>=arr[i]) {ans.push_back(arr[i]);ans.push_back(arr[i]-1);}
			else  {if(arr[i+1]!=1) {ans.push_back(arr[i]);ans.push_back(arr[i+1]-1);} else {ans.push_back(arr[i]);ans.push_back(arr[i+1]);}} 
		}else{
			ans.push_back(arr[i]);
		} 
		}
	}
	cout<<ans.size()<<"\n";
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
