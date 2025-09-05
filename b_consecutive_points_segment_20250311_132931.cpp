/*
 * Problem: B. Consecutive Points Segment
 * URL: https://codeforces.com/contest/1671/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
     map<int,int> mp;
	for(int i=0;i<n-1;i++){
		int x=arr[i+1]-arr[i];
		mp[x]++;
	}bool flag=1;
	for(auto&v:mp){
		if(v.first==2){
			if(v.second>2) {flag=0;break;}
		}else if(v.first==3){
			if(v.second>1){flag=0;break;}
		}
		else if(v.first>3&&v.second>0){flag=0;break;}
	}
	auto x=mp.find(2);
	auto y=mp.find(3);
	if(x!=mp.end()&&y!=mp.end()){
	if(x->second>0&&y->second>0) flag=0;
}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
		
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
