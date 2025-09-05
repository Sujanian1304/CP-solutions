/*
 * Problem: D. Mathematical Problem
 * URL: https://codeforces.com/contest/1986/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int m=1e9;int a=0;
    if(n==2){ if(s[0]=='0') cout<<s[1]<<"\n";else cout<<s<<"\n";return;}
    else if(s[0]=='0') {cout<<"0\n";return;}
    if (n==3) {
    int a = (s[0]-'0')*10 + (s[1]-'0');  
    int r1 = min( a * (s[2]-'0'),  a + (s[2]-'0') );

    int b = (s[1]-'0')*10 + (s[2]-'0'); 
    int r2 = min( (s[0]-'0') * b,  (s[0]-'0') + b );

    cout << min(r1, r2) << "\n";
    return;
}
    else{
		int m=1e9;
		for(int i=0;i<n-1;i++){
			if(s[i]=='0'||s[i+1]=='0'){cout<<"0\n";return;}
			int x=(s[i]-48)*10;x+=s[i+1]-48;
			for(int j=0;j<n;j++){
				if(j==i){j++;continue;}
				if(s[j]=='0'){cout<<"0\n";return;}
				else if(s[j]!='1'){x+=s[j]-48;}
			}
			m=min(m,x);
		}
		cout<<m<<"\n";
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
