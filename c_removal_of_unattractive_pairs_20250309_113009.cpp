/*
 * Problem: C. Removal of Unattractive Pairs
 * URL: https://codeforces.com/contest/1907/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;int ma=0;
    vector<int> dis(26,0);
    for(int i=0;i<n;i++){
		dis[s[i]-97]++;
		ma=max(ma,dis[s[i]-97]);
	}
    if(n%2){
		if(ma>n/2){cout<<(ma-(n-ma))<<"\n";}
		else cout<<"1\n";
	}
	else{
		if(ma>n/2){cout<<(ma-(n-ma))<<"\n";}
		else cout<<"0\n";
	}
	//cout<<s;
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
