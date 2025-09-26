/*
 * Problem: A - Unsupported Type
 * URL: https://atcoder.jp/contests/abc415/tasks/abc415_a
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
		int b;cin>>b;
		a[i]=b;
	}
	int c;cin>>c;
	auto it=find(a.begin(),a.end(),c);
	if(it!=a.end()){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
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
