/*
 * Problem: C - King's Summit
 * URL: https://atcoder.jp/contests/abc419/tasks/abc419_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
		int b,c;cin>>b>>c;
		a.push_back({b,c});
	}
	int lo=0;int hi=1e9;int  mid=0;
	while(lo<=hi){
		int maxR=-1e9;int minR=1e9;
	    int maxC=-1e9;int minC=1e9;
		 mid=lo+(hi-lo)/2;
		for(int i=0;i<n;i++){
			maxR=max(maxR,a[i].first-mid);
			minR=min(minR,a[i].first+mid);
			maxC=max(maxC,a[i].second-mid);
			minC=min(minC,a[i].second+mid);
		}
		if(maxR<=minR&&maxC<=minC){
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	cout<<lo<<"\n";
	
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
