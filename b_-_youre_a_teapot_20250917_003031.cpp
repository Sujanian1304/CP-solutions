/*
 * Problem: B - You're a teapot
 * URL: https://atcoder.jp/contests/abc418/tasks/abc418_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    string t;double finans=0; 
    int n=s.size();
    for(int i=0;i<n;i++){
		double ans=0;
		double cntt=0;
		if(s[i]=='t'){
			cntt++;
			for(int j=i+1;j<n;j++){
				if(s[j]=='t'){
				  cntt++;
				  if(j-i+1>=3){
	                 ans=(double)(cntt-2)/((double)(j-i+1)-2); 
	                  finans=max(ans,finans);
			  }
			}
		 }
	 }
 }
		cout<<setprecision(17)<<finans<<"\n";
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
