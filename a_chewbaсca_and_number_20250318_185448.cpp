/*
 * Problem: A. Chewbaсca and Number
 * URL: https://codeforces.com/problemset/problem/514/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int x=n;vector<int> ans;
    while(x!=0){
		if(x!=9){
	  int a=x%10;
	  if(a>=5){a=9-a;}
	   ans.push_back(a);
	   x=x/10;
   }else {ans.push_back(x);break;}
   }
   reverse(ans.begin(),ans.end());
   for(auto&v:ans) cout<<v;
   cout<<"\n";
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
