/*
 * Problem: C. Removing Smallest Multiples
 * URL: https://codeforces.com/problemset/problem/1734/C
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
    int ans=0;
    for(int i=1;i<=n;i++){
		if(s[i-1]=='1') continue;
		else{
			if(s[i-1]=='0')ans+=i;
			int x=i;
			while(x<=n){
				x+=i;
				if(x>n) break;
				if(s[x-1]=='0'){ans+=i;s[x-1]='2';}
					else if(s[x-1]=='1') break;
				}
			}
	}
	cout<<ans<<"\n";
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
