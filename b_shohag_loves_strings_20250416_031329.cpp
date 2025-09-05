/*
 * Problem: B. Shohag Loves Strings
 * URL: https://codeforces.com/contest/2039/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> pow_2(20);
void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    if(n==1){cout<<"-1\n";return;}
    else if(n==2){if(s[0]==s[1]){cout<<s<<"\n";return;}}
	else{
    for(int i=0;i<(int)s.size()-2;i++){
		if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2]){cout<<s[i]<<s[i+1]<<s[i+2]<<"\n";return;}
		if(s[i]==s[i+1]){cout<<s[i]<<s[i+1]<<"\n";return;}
		if(s[i+1]==s[i+2]){cout<<s[i+1]<<s[i+2]<<"\n";return;}
		if(s[i]==s[i+2]){if(i<3&&s[i+3]==s[i]) {cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<"\n";return;}}
	}
}
	cout<<"-1\n";
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<20;i++){
		int a;
		if(i==0) a=1;
		else a=pow_2[i-1]*2;
		pow_2[i]=(a);
	}
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
