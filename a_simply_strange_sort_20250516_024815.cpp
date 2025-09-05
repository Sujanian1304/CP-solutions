/*
 * Problem: A. Simply Strange Sort
 * URL: https://codeforces.com/contest/1561/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
      int  t=0;
	   for(int i=1;i<=n;i++){
		   t+=abs(a[i]-(i));
	   }
	   if(t==0){cout<<t<<"\n";return;}
     t=1;
     while(true){
		 if(t%2==0){
			 for(int i=2;i<n;i+=2){
				 if(a[i]>a[i+1]) swap(a[i],a[i+1]);
			 }
		 }else{
			 for(int i=1;i<n;i+=2){
				 if(a[i]>a[i+1]) swap(a[i],a[i+1]);
			 }
		 }
	    int  cnt=0;
	   for(int i=1;i<=n;i++){
		   cnt+=abs(a[i]-(i));
	   }
	   if(cnt==0) break;
	   t++;
   }
   cout<<t<<"\n";
			 
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
