/*
 * Problem: F. Yet Another Problem About Pairs Satisfying an Inequality
 * URL: https://codeforces.com/contest/1703/problem/F
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
	vector<pair<int,int>> brr;vector<int> brr1;
	for(int i=0;i<n;i++){
		if(arr[i]<i+1){ brr.push_back({arr[i],i+1});brr1.push_back(arr[i]);}
	}
	
	sort(brr.begin(),brr.end());int cnt=0;
	sort(brr1.begin(),brr1.end());
	//for(auto&v:brr){cout<<v.first<<" "<<v.second<<" ";}
	for(int i=0;i<brr.size();i++){
		auto it=upper_bound(brr1.begin(),brr1.end(),brr[i].second)-brr1.begin();
		 cnt+=(int)brr.size()-it;
		 //cout<<it<<" ";
	}
	cout<<cnt<<"\n";
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
