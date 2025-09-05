/*
 * Problem: C. Drazil and Factorial
 * URL: https://codeforces.com/problemset/problem/515/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;string t="";
    for(int i=0;i<n;i++){
		if(s[i]=='1'||s[i]=='0') continue;
		else if(s[i]=='4') {t+=char('0'+2);t+=char('0'+2);t+=char('0'+3);}
		else if(s[i]=='6'){t+=char('0'+3);t+=char('0'+5);}
		else if(s[i]=='8'){t+=char('0'+2);t+=char('0'+2);t+=char('0'+2);t+=char('0'+7);}
		else if(s[i]=='9'){t+=char('0'+2);t+=char('0'+3);t+=char('0'+3);t+=char('0'+7);}
		else t+=s[i];
	}
	
	sort(t.begin(),t.end(),greater<char>());
	cout<<t;
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
