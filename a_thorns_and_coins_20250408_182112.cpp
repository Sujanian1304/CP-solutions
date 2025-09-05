/*
 * Problem: A. Thorns and Coins
 * URL: https://codeforces.com/contest/1932/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int cnt=0;bool flag=0;
    for(int i=0;i<n-1;i++){
		if(s[i]=='*'&&s[i+1]=='*'){flag=1;break;}
		if(s[i]=='@') cnt++;
	}
	if(s[n-1]=='@'&&flag==0) cnt++;
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
