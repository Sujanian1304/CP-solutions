/*
 * Problem: B. Minor Reduction
 * URL: https://codeforces.com/contest/1626/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();
    if(n==1) cout<<s<<"\n";
    else if(n==2) cout<<(s[0]-48)+(s[1]-48)<<"\n";
    else{
    for(int i=n-1;i>=2;i--){
		if((s[i]-48)+(s[i-1]-48)>=10) {cout<<s.substr(0,(i-1));cout<<(s[i]-48)+(s[i-1]-48)<<s.substr(i+1,n-(i+1))<<"\n"; return;}
	}
	cout<<(s[0]-48)+(s[1]-48)<<s.substr(2,n-2)<<"\n";
}
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
