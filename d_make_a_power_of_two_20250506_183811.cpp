/*
 * Problem: D. Make a Power of Two
 * URL: https://codeforces.com/problemset/problem/1560/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int ans=1e18;
    for(int i=0;i<61;i++){
		int x=(1LL<<i);int cnt=0;
		string t=to_string(x);
		int j=0;int z=0;
		while(j<(int)s.size()&&z<(int)t.size()){
			if(s[j]==t[z]){j++;z++;cnt++;}
			else if(s[j]!=t[z]){j++;}
		}
		//cout<<x<<" ";
		int a=(s.size()-cnt)+(t.size()-cnt);
		if(a<ans){
			ans=a;
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
