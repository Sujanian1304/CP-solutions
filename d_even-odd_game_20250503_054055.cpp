/*
 * Problem: D. Even-Odd Game
 * URL: https://codeforces.com/problemset/problem/1472/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	int sum=0;
	for(int i=0;i<n;i++){
		if(i%2==0){if(a[i]%2==0) sum+=a[i];}
		else {if(a[i]%2) sum-=a[i];}
	}
	if(sum>0)cout<<"Alice\n";
	else if(sum<0) cout<<"Bob\n";
	else cout<<"Tie\n";
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
