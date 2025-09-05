/*
 * Problem: D - Ghost Ants
 * URL: https://atcoder.jp/contests/abc360/tasks/abc360_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<pair<int,int>> parr,narr;
    for(int i=0;i<n;i++){
		int val;cin>>val;
		if(s[i]=='0') narr.push_back({val,i});
		else parr.push_back({val,i});
	}
	int x=parr.size();int y=narr.size();int cnt=0;
	for(int i=0;i<x;i++){
			int lo=0;int hi=y-1;int ans=-1;
			while(lo<=hi){
				int mid=lo+(hi-lo)/2;
				if(abs(parr[i].first-narr[mid].first)/2>m){
					ans=mid;hi=mid-1;
				}
				else{
					lo=mid+1;
				}
			}
			if(ans==-1) ans=y;
			if(ans!=0) ans-=1;
			 lo=0; hi=y-1;int an=-1;
			while(lo<=hi){
				int mid=lo+(hi-lo)/2;
				if(parr[i].second<narr[mid].second){
					an=mid;hi=mid-1;
				}
				else{
					lo=mid+1;
				}
			}
			if(an==-1) continue;
			//cout<<ans<<an<<"  ";
			cnt+=(ans-an+1);
	}
	cout<<cnt<<"\n";
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
