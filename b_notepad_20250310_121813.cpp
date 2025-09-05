/*
 * Problem: B. Notepad#
 * URL: https://codeforces.com/contest/1766/problem/B
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    map<string,int> mp;
    for(int i=0;i<n-1;i++){
			 string t;
			 t=s.substr(i,2);
			 //cout<<t<<" ";
			 mp[t]++;
			 if((i<n-2)&&s[i]==s[i+1]&&s[i+1]==s[i+2]) i+=1;
		 }
	 for(auto&v:mp) { if(v.second>1) {cout<<"YES\n"; return;}}	
     cout<<"NO\n";
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
