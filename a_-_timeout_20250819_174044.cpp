/*
 * Problem: A - Timeout
 * URL: https://atcoder.jp/contests/abc408/tasks/abc408_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;int s;cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]>s){
		cout<<"No"<<"\n";
			return;
		}
	for(int i=0;i<n-1;i++){
		if(a[i+1]-a[i]>s){
			cout<<"No"<<"\n";
			return;
		}
	}
	cout<<"Yes"<<"\n";
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
