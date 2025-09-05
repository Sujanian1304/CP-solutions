/*
 * Problem: B. Down with Brackets
 * URL: https://codeforces.com/contest/2110/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++){
		int cnt1=0;int cnt2=0;
		if(s[i]=='('){
			cnt1=1;
			for(int j=i+1;j<n;j++){
				if(s[j]=='(') cnt1++;
				else cnt2++;
				if(cnt1==cnt2){i=j; break;}
			}
			cnt++;
		}
	}
	//cout<<cnt<<"\n";
  if(cnt>1){cout<<"Yes\n";}
  else cout<<"No\n";
				
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
