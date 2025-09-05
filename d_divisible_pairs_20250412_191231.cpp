/*
 * Problem: D. Divisible Pairs
 * URL: https://codeforces.com/contest/1931/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
    vector<int> arr(n);map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]%k].push_back(i);
	}
	int ans=0;
	for(auto&v:mp){
		vector<int> arr1;map<int,int> mp1;int cnt=0;
		for(auto&a:v.second){
			if(arr[a]%m==0){ cnt++;}
			else{
				//cout<<arr[a]<<" ";
			arr1.push_back(arr[a]%m);
			mp1[(arr[a]%m)]++;
		}
	 }
	 cout<<"\n";
	//for(auto&v:arr1) cout<<mp1[v]<<" ";
	// cout<<"\n";
	   for(auto&s:arr1){
				//cout<<mp1[m-s]<<" ";
				if(m-s==s){
					ans+=mp1[s]*(mp1[s]-1)/2;
					mp1.erase(s);
				}
				auto it=mp1.find(m-s);
				if(it!=mp1.end()) {ans+=mp1[s]*mp1[m-s];mp1.erase(m-s);}
			}
		//ans=ans/2;
		if(cnt>0) ans+=cnt*(cnt-1)/2;
		arr1.clear();mp1.clear();cnt=0;
   }
  cout<<ans<<"\n";
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
