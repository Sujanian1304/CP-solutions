/*
 * Problem: B. Reverse Binary Strings
 * URL: https://codeforces.com/problemset/problem/1437/B
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
    for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			ans++;
			if(i==n-1){s[i]=((s[i]=='1')?'0':'1');}
			for(int j=i;j<n-1;j++){
				if(s[j]==s[j+1]){i=j;s[j]=((s[j]=='1')?'0':'1');break;}
				s[j]=((s[j]=='1')?'0':'1');
				if(j==n-2){s[j+1]=((s[j+1]=='1')?'0':'1');}
			}
		}
	}
	//cout<<s;
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
