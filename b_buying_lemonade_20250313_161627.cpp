/*
 * Problem: B. Buying Lemonade
 * URL: https://codeforces.com/contest/2024/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr;map<int,int> mp;
    for(int i=0;i<n;i++){
		int y;cin>>y;
		mp[y]++;
		if(mp[y]==1) arr.push_back(y);
	}
	sort(arr.begin(),arr.end());
	int i=0;int sum=0;int cnt=0;int x=n;
	while(sum<m){
		if(i==0)sum+=arr[i]*(x);
		else sum+=(arr[i]-arr[i-1])*(x);
		if(sum>=m) break;
		cnt+=mp[arr[i]];
		x=x-mp[arr[i]];
		i++;
	}
	cout<<m+cnt<<"\n";
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
