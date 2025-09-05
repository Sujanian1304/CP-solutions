/*
 * Problem: B. Box Fitting
 * URL: https://codeforces.com/problemset/problem/1498/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);multiset<int>mst;
    for(int i=0;i<n;i++){
		cin>>a[i];
		mst.insert(a[i]);
	}
	int s=m;int ans=1;
	while(!mst.empty()){
		auto it=mst.upper_bound(s);
		if(it==mst.end()){
			it--;
		s-=*it;
		mst.erase(it);
	}else{
		if(*(it)==*mst.begin()){
		ans++;
		s=m;
	}else{
		--it;
		s-=*it;
		mst.erase(it);
	}
	}
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
