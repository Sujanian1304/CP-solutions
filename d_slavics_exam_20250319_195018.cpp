/*
 * Problem: D. Slavic's Exam
 * URL: https://codeforces.com/problemset/problem/1999/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;
    cin>>s>>t;int cnt=0;int n=t.size();int m=s.size();vector<int> arr;
    for(int i=0;i<m;i++){
		if(s[i]=='?') {cnt++;arr.push_back(i);}
	}
	int ptr=0;
	for(int i=0;i<m;i++){
		if(ptr<t.size()&&s[i]==t[ptr])ptr++;
		else if(s[i]=='?'){s[i]=t[ptr];if(ptr<t.size()) ptr++;else s[i]='a';}
	}
	if(ptr==n) {cout<<"YES\n";cout<<s<<"\n";}
	else cout<<"NO\n";
	
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
