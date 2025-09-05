/*
 * Problem: C. Increasing Sequence with Fixed OR
 * URL: https://codeforces.com/contest/1988/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
   int n;cin>>n;deque<int> ans;
   for(int i=0;i<64;i++){
	   if(1LL&(n>>i)){ans.push_front(i);}
   }
   if(ans.size()==1){cout<<1<<"\n";cout<<n<<"\n";return;}
   else{
	   cout<<ans.size()+1<<"\n";
	   for(int i=0;i<ans.size();i++){
		   int y=n-(1LL<<ans[i]);
		   cout<<y<<" ";
	   }
	    cout<<n<<" ";
	   cout<<"\n";
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
