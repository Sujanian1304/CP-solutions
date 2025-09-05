/*
 * Problem: B. Berland Music
 * URL: https://codeforces.com/contest/1622/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]=i;
	}
	string s;cin>>s;set<int> arr1,arr2;
	for(int i=0;i<n;i++){
		if(s[i]=='1')arr1.insert(arr[i]);
		else arr2.insert(arr[i]);
	}
	int x=n-arr1.size()+1;
	for(auto&v:arr1){
		arr[mp[v]]=x;
		x++;
	}
	x=1;
	for(auto&v:arr2){
		arr[mp[v]]=x;
		x++;
	}
	for(auto&v:arr) cout<<v<<" ";
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
