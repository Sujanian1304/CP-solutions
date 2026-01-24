/*
 * Problem: B - Music Player
 * URL: https://atcoder.jp/contests/abc442/tasks/abc442_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int vol=0;bool play=0;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		if(a==1) vol++;
		if(a==2){
			if(vol>=1) vol--;
		}
		if(a==3) play=!play;
		
		if(play&&vol>=3){cout<<"Yes\n";}
		else cout<<"No\n";
	}
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
