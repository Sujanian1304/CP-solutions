/*
 * Problem: C. Poisoned Dagger
 * URL: https://codeforces.com/problemset/problem/1613/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int check(int m,vector<int>& a){
	int ans=m;
	for(int i=0;i<(int)a.size()-1;i++){
		ans+=min(m,a[i+1]-a[i]);
	}
	return ans;
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int lo=1;int hi=1e18;int ans=0;
    while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(check(mid,a)>=m){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
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
