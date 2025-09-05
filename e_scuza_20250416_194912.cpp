/*
 * Problem: E. Scuza
 * URL: https://codeforces.com/contest/1742/problem/E
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n),brr(m);vector<int> p(n);vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0)a[i]=arr[i];
		else a[i]=max(arr[i],a[i-1]);
		if(i==0)p[i]=arr[i];
		else p[i]=arr[i]+p[i-1];
	}
	for(int i=0;i<m;i++){
		cin>>brr[i];
	}
	for(int i=0;i<m;i++){
		auto it=upper_bound(a.begin(),a.end(),brr[i])-a.begin()-1;
		if(it==-1) cout<<0<<" ";
		else cout<<p[it]<<" ";
	}
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
