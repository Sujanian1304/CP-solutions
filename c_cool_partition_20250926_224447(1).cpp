/*
 * Problem: C. Cool Partition
 * URL: https://codeforces.com/contest/2117/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);vector<int> dis(n);map<int,int> mp;int cnt=0;
    dis[0]=1;
    for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
		if(mp[a[i]]==1&&i>0) dis[i]=dis[i-1]+1;
		else if(mp[a[i]]>1&&i>0) dis[i]=dis[i-1];
	}
	int dist=dis[n-1];map<int,int> mp1;
	for(int i=n-1;i>=0;i--){
		if(dist==0) {cnt++;dist=dis[i];mp1.clear();}
		mp1[a[i]]++;
		if(mp1[a[i]]==1) dist--;
	}
	cout<<cnt+1<<"\n";
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
