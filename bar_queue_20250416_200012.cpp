/*
 * Problem: Bar Queue
 * URL: https://www.codechef.com/START182C/problems/QBGI
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;int b=0;int g=0;int ans=n;
    for(int i=0;i<n;i++){
		if(s[i]=='B') b++;
		else if (s[i] == 'G') g++; 
		if(b>2*g){ans=i+1;break;}
		//if(b==2*g){ans=i+1;break;}
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
