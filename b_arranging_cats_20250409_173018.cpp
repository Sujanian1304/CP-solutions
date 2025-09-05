/*
 * Problem: B. Arranging Cats
 * URL: https://codeforces.com/contest/1921/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s,t;cin>>s>>t;
    int rem=0;int add=0;
    for(int i=0;i<n;i++){
		if(s[i]==t[i]) continue;
		else{
			if(s[i]=='1') rem++;
			else add++;
		}
	}
	cout<<max(rem,add)<<"\n";
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
