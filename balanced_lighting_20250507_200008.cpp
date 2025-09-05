/*
 * Problem: Balanced Lighting
 * URL: https://www.codechef.com/START185C/problems/RBLT
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);int cnt1=0;int cnt2=0;
    for(int i=0;i<n;i++) {cin>>a[i];if(a[i]==1) cnt1++;else if(a[i]==2) cnt2++;}
    int rem=n-(cnt1+cnt2);
    if(cnt1==cnt2){
		if(rem%2) {cout<<"NO\n";}
		else cout<<"YES\n";
	}
	else{
		if(cnt1>cnt2){
			int m=cnt1-cnt2;
			if(m>rem){cout<<"NO\n";return;}
			if((rem-m)%2){cout<<"NO\n";}
			else cout<<"YES\n";
		}
		else if(cnt2>cnt1){
			int m=cnt2-cnt1;
			if(m>rem){cout<<"NO\n";return;}
			if((rem-m)%2){cout<<"NO\n";}
			else cout<<"YES\n";
		}
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
