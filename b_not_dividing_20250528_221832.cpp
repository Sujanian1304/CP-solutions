/*
 * Problem: B. Not Dividing
 * URL: https://codeforces.com/contest/1794/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
     }
     for(int i=0;i<n;i++){
       if(a[i]==1) a[i]++;
     }
     for(int i=0;i<n-1;i++){
		 if(a[i+1]%a[i]==0){
			 if(a[i]==1){
				 a[i]+=1;
				 if(a[i+1]%a[i]==0) a[i+1]++;
				 if(a[i+1]==1) a[i+1]+=2;
			 }else{
				 a[i+1]++;
			 }
		 }
	 } 
	 for(int i=0;i<n;i++) cout<<a[i]<<" ";
	 cout<<"\n";
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
