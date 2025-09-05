/*
 * Problem: C - LRUD Instructions 2
 * URL: https://atcoder.jp/contests/abc291/tasks/abc291_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
using state=pair<int,int>;
void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;
    state in={0,0};map<state,int> mp;bool flag=1;
    mp[in]++;
    for(int i=0;i<n;i++){
		if(s[i]=='R'){
			in.F=in.F+1;
		}
		else if(s[i]=='L'){
			in.F=in.F-1;
		}
		else if(s[i]=='U'){
			in.S=in.S+1;
		}
		else if(s[i]=='D'){
			in.S=in.S-1;
		}
		mp[in]++;
		//cout<<in.F<<" "<<in.S<<" ";
		if(mp[in]>1){ flag=0;break;}
	}	
	if(flag) cout<<"No\n";
	else cout<<"Yes";
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
