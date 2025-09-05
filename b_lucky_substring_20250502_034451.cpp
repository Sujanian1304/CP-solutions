/*
 * Problem: B. Lucky Substring
 * URL: https://codeforces.com/problemset/problem/122/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int cnt4=0;int cnt7=0;
    for(int i=0;i<(int)s.size();i++){
		if(s[i]=='4') cnt4++;
		else if(s[i]=='7') cnt7++;
	}
	if(cnt4==0&&cnt7==0) cout<<"-1\n";
	else{
	if(cnt4<cnt7) cout<<7<<"\n";
	else cout<<4<<"\n";
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
