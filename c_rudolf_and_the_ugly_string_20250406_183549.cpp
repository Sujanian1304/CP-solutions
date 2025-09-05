/*
 * Problem: C. Rudolf and the Ugly String
 * URL: https://codeforces.com/contest/1941/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
		if(s[i]=='p') {
			if(i<2) {if(s[i+1]=='i'&&s[i+2]=='e') cnt++;}
			else if(i>n-3) {if(s[i-1]=='a'&&s[i-2]=='m') cnt++;}
			else if(i>=2&&i<n-2){
			if(s[i-1]=='a'&&s[i-2]=='m'&&s[i+1]=='i'&&s[i+2]=='e') cnt++;
			else{
				if(s[i-1]=='a'&&s[i-2]=='m') cnt++;
			if(s[i+1]=='i'&&s[i+2]=='e') cnt++;
		}
	}
}
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
