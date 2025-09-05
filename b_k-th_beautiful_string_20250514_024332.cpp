/*
 * Problem: B. K-th Beautiful String
 * URL: https://codeforces.com/problemset/problem/1328/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n-1);vector<int> p(n-1);p[0]=1;
    for(int i=0;i<n-1;i++){
		a[i]=i+1;
		if(i>0)p[i]=a[i]+p[i-1];
	}
	int x=upper_bound(p.begin(),p.end(),m)-p.begin();
	if(x==n-1) x--;
	if(x>0&&p[x-1]==m) x--;
	int y=0;
	if(x>0) y=m-(p[x-1]+1);
	else y=p[x]-m;
	x=n-2-x;
	y=n-1-y;
	vector<char> ans(n);
	for(int i=0;i<n;i++){ans[i]='a';}
	ans[y]='b';ans[x]='b';
	for(auto&v:ans){cout<<v;}
	cout<<"\n";
	
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
