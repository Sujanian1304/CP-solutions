/*
 * Problem: C. Differential Sorting
 * URL: https://codeforces.com/problemset/problem/1635/C
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
    vector<int>brr;brr=arr;
    sort(brr.begin(),brr.end());
    //reverse(brr.begin(),brr.end());
    if(brr==arr) {cout<<"0\n";return;}
	if(arr[n-2]>arr[n-1]){cout<<"-1\n";return;}
	vector<pair<int,pair<int,int>>> ans;
     for(int i=n-3;i>=0;i--){
		 if(arr[i]>arr[i+1]){
		 int x=arr[i+1]-arr.back();
		 if(x<=arr[i+1]){arr[i]=x;ans.push_back({i,{i+1,n-1}});}
		 else {cout<<"-1\n";return;}
	 }
 }
     cout<<ans.size()<<"\n";
  for(auto&v:ans){cout<<v.first+1<<" "<<v.second.first+1<<" "<< v.second.second+1<<"\n";}
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
