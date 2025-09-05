/*
 * Problem: C. Stable Groups
 * URL: https://codeforces.com/problemset/problem/1539/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k,x;cin>>n>>k>>x;
    vector<int> arr;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	int g=1;multimap<int,pair<int,int>> mp;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]>x){mp.insert({arr[i+1]-arr[i],{i,i+1}});g++;}
	}
	for(auto&v:mp){
		int z=(v.first+x-1)/x-1;
		if(z>k){break;}
		else{k-=z;g--;}
	}
	cout<<g<<"\n";
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
