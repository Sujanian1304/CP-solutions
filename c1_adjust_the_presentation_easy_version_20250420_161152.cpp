/*
 * Problem: C1. Adjust The Presentation (Easy Version)
 * URL: https://codeforces.com/contest/2021/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,q;cin>>n>>m>>q;
    vector<int> arr(n),brr(m);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>brr[i];
    map<int,int> mp;int x=0;
    for(int i=0;i<m;i++){
		if(i==0){if(brr[i]!=arr[x]){ cout<<"TIDAK\n";return;};mp[arr[i]]++;x++;}
		if(arr[x]==brr[i]) {mp[arr[x]]++;if(x<n-1)x++;}
		else if(arr[x]!=brr[i]){
			if(mp[brr[i]]>0) continue;
			else {cout<<"TIDAK\n";return;}
		}
	}
	cout<<"YA\n";
			
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
