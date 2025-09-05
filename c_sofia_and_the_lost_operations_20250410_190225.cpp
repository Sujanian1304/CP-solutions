/*
 * Problem: C. Sofia and the Lost Operations
 * URL: https://codeforces.com/contest/1980/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n),brr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	int m;cin>>m;
	vector<int> d(m);map<int,int> mp;
	for(int i=0;i<m;i++){
		cin>>d[i];
		mp[d[i]]++;
	}
	for(int i=0;i<n;i++){
		if(arr[i]!=brr[i]){
			auto it=mp.find(brr[i]);
			if(it!=mp.end()){
				it->second--;
				if(it->second<0) {cout<<"NO\n";return;}
			}
			else{
				cout<<"NO\n";return;}
		}
	}
	bool flag=0;
	for(int i=0;i<n;i++){if(d[m-1]==brr[i]) {flag=1;break;}}
	if(!flag) {cout<<"NO\n";return;}
		cout<<"YES\n";
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
