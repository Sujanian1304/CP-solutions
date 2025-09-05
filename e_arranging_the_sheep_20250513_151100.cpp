/*
 * Problem: E. Arranging The Sheep
 * URL: https://codeforces.com/problemset/problem/1520/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<char> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>b;int y=0;
	for(int i=0;i<n;i++){
		if(a[i]=='*'){
			b.push_back(i-y);
			y++;
		}for(auto
	}
	int x=b.size();
	if(x%2){y=x/2;}
	else{y=x/2-1;}
	int ans=0;
	for(int i=0;i<x;i++){
		ans+=abs(b[i]-b[y]);
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
