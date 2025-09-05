/*
 * Problem: C. Dominant Character
 * URL: https://codeforces.com/problemset/problem/1605/C
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
    int ans=1e9;
    for(int i=0;i<n;i++){
		int cnta=0;int cntb=0;int cntc=0;
		for(int j=i;j<min(i+7,n);j++){
			if(s[j]=='a') cnta++;
			else if(s[j]=='b') cntb++;
			else cntc++;
			if(cnta>cntc&&cnta>cntb&&cnta>1){ans=min(ans,j-i+1);}
		}
	}
	if(ans==1e9)cout<<"-1\n";
	else cout<<ans<<"\n";
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
