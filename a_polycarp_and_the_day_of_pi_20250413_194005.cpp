/*
 * Problem: A. Polycarp and the Day of Pi
 * URL: https://codeforces.com/contest/1790/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
string t="31415926535897932384626433832795";
void solve() {
    // Your solution here
    string s;cin>>s;int cnt=0;
    for(int i=0;i<s.size();i++){
		if(s[i]==t[i]) {cnt++;}
		else break;
	}
	cout<<cnt<<"\n";
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
