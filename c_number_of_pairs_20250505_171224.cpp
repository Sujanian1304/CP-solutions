/*
 * Problem: C. Number of Pairs
 * URL: https://codeforces.com/problemset/problem/1538/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,l,r;cin>>n>>l>>r;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=0;i<n-1;i++){
		int x=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
		int y=upper_bound(a.begin()+1+i,a.end(),r-a[i])-a.begin();
		y--;
		if(x==a.size()) x--;
		if(y==a.size()) y--;
		//cout<<a[i]+b[x]<<" "<<a[i]+b[y]<<" ";
		if(a[i]+a[x]>=l&&a[i]+a[x]<=r){
			if(a[i]+a[y]>=l&&a[i]+a[y]<=r){
				ans+=(y-x+1);
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
