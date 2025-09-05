/*
 * Problem: D. Test of Love
 * URL: https://codeforces.com/contest/1992/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
   int n,m,k;cin>>n>>m>>k;
   string s;cin>>s;
   if(m>=n+1){cout<<"YES\n";return;}
   vector<int> l;
   for(int i=0;i<n;i++){
	   if(s[i]=='L') l.push_back(i+1);
   }
   l.push_back(n+1);
  int i=0;int n_l=0;
  while(i<n){
	  if(m>=(l[n_l]-i)){i=l[n_l];}
	  else{
		  i+=m;
		  if(i>n){cout<<"YES\n";return;}
		  while(i<=n&&i<l[n_l]){
			  if(s[i-1]!='C'&&k>0){
				  k--;i++;
			  }
			  else{
				  cout<<"NO\n";return;}
			  }
		  }
		  n_l++;
	  }
	  cout<<"YES\n";
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
