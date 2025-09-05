/*
 * Problem: C. Boring Day
 * URL: https://codeforces.com/contest/1982/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,l,r;cin>>n>>l>>r;
    vector<int> arr(n);vector<int>p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0) p[i]=arr[i];
		else p[i]=p[i-1]+arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=l) {
			if(arr[i]<=r)ans++;}
		else if(arr[i]<l){
			if(i==0) {
				auto it=lower_bound(p.begin(),p.end(),l)-p.begin();
				if(it<n&&p[it]<=r) {ans++;i=it;}
			}
			else{
				int y=p[i-1]+l;
				auto it=lower_bound(p.begin(),p.end(),y)-p.begin();
				if(it<n&&p[it]<=p[i-1]+r) {ans++;i=it;}
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
