/*
 * Problem: C. Di-visible Confusion
 * URL: https://codeforces.com/problemset/problem/1604/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];if(a[i]%(i+2)!=0)a[i]=0;}
     for(int i=0;i<n;i++){  
	   if(a[i]!=0){
		   int x=i-1;
		   while(x>=0){
			   if(a[i]%(x+2)!=0){a[x]=0;break;}
			   x--;
		   }
		   if(x<0){cout<<"NO\n";return;}
	   }
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
