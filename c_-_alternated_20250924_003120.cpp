/*
 * Problem: C - Alternated
 * URL: https://atcoder.jp/contests/abc421/tasks/abc421_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    vector<int> a;
    for(int i=0;i<2*n;i++){
		 if(s[i]=='A') a.push_back(i);
	 }
	 int ans=0;
	 for(int i=0;i<(int)a.size();i++){
		 ans+=abs(a[i]-i*2);
	 }int ans1=0;
	 for(int i=0;i<(int)a.size();i++){
		 ans1+=abs(a[i]-(i*2+1));
	 }
	 //cout<<ans<<ans1;
	 cout<<min(ans,ans1);
	
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
