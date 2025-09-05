/*
 * Problem: B. AccurateLee
 * URL: https://codeforces.com/problemset/problem/1369/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;
    string t="";
    int a=-1;int b=-1;
    for(int i=0;i<n;i++){
		if(s[i]=='1'){a=i;break;}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='0'){b=i;break;}
	}
	if(a>b||a==-1||b==-1){cout<<s<<"\n";}
	else{
		for(int i=0;i<a;i++) t+=s[i];
		t+='0';
		for(int i=b+1;i<n;i++) t+=s[i];
		cout<<t<<"\n";
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
