/*
 * Problem: B - Citation
 * URL: https://atcoder.jp/contests/abc409/tasks/abc409_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	int m=100;
	int st=0;
	for(int i=0;i<n;i++){
		if(a[i]>100){
			st+=mp[a[i]];
		}
	}
	//cout<<m;
	mp[m]+=st;
	if(mp[m]>=m){
		cout<<m<<"\n";
		return;
	}
	for(int i=m-1;i>=0;i--){
		if(mp[i]+mp[i+1]>=i){
			cout<<i<<"\n";
			return;
			}
			else{
				mp[i]+=mp[i+1];
				//cout<<i<<" "<<mp[i]<<" ";
			}
		}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
