/*
 * Problem: C. A-B Palindrome
 * URL: https://codeforces.com/problemset/problem/1512/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,m;cin>>a>>m;
    int c,d;c=a;d=m;
    string s;cin>>s;int n=s.size();
    for(int i=0;i<n;i++){
		if(s[i]=='1') m--;
		else if(s[i]=='0') a--;
	}
    for(int i=0;i<n/2;i++){
		if(s[i]=='?'){
				if(s[n-1-i]=='1'){
					if(m>=1){s[i]='1';m--;}
					else {cout<<"-1\n";return;}
					}
					else if(s[n-1-i]=='0'){
						if(a>=1){s[i]='0';a--;}
						else {cout<<"-1\n";return;}
					}
				
			}
			else if(s[n-1-i]=='?'){
				if(s[i]=='1'){
					if(m>=1){s[n-i-1]='1';m--;}
					else {cout<<"-1\n";return;}
					}
					else if(s[i]=='0'){
						if(a>=1){s[n-1-i]='0';a--;}
						else {cout<<"-1\n";return;}
					}
				}
				//if(a==0&&m==0) break;
			}
			//cout<<s<<" ";
			int cnt0=0;int cnt1=0;
	for(int i=0;i<n/2;i++){
		if(s[i]=='?'&&s[n-1-i]=='?'){
			if(a>=2){s[i]='0';s[n-1-i]='0';a-=2;}
			else if(m>=2){s[i]='1';s[n-1-i]='1';m-=2;}
			else {
                cout << "-1\n";
                return;
            }
			}
		if(s[i]!=s[n-1-i]){cout<<"-1\n";return;}
		if(s[i]=='1') cnt1+=2;
		else cnt0+=2;
	}
	if(n%2&&s[n/2]=='?'){
				if(a<=0&&m<=0){cout<<"-1\n";return;}
				if(a>0) s[n/2]='0';
				else if(m>0) s[n/2]='1';
			}
	if(n%2){if(s[n/2]=='1') cnt1++;else cnt0++;}
	//cout<<cnt0<<cnt1;
	if(cnt0!=c||cnt1!=d){cout<<"-1\n";}
	else cout<<s<<"\n";
				
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
