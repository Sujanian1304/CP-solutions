/*
 * Problem: B. Vlad and Shapes
 * URL: https://codeforces.com/contest/1926/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++){
		string t;cin>>t;
		s.push_back(t);
	}
	bool flag=1;
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(s[i][j]=='1') cnt++;
		}
		if(cnt==1) {flag=0;break;}
	}
	if(flag) cout<<"SQUARE\n";
	else cout<<"TRIANGLE\n";
		
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
