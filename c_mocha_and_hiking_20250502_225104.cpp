/*
 * Problem: C. Mocha and Hiking
 * URL: https://codeforces.com/problemset/problem/1559/C
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
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){if(a[0]==1){cout<<"2 1\n";}else{ cout<<"1 2\n"; }return;}
    if(a[n-1]==0){
    for(int i=1;i<=n+1;i++) cout<<i<<" ";
    cout<<"\n";
    }else{
		int ans=-1;
		for(int i=n-1;i>0;i--){if(a[i]==1&&a[i-1]==0){ans=i;break;}}
		if(ans==-1){
			cout<<n+1<<" ";
			for(int i=0;i<n;i++)cout<<i+1<<" ";
			cout<<"\n";
			return;
		  }
	   for(int i=0;i<ans;i++){cout<<i+1<<" ";}
	   cout<<n+1<<" ";
	   for(int i=ans;i<n;i++){cout<<i+1<<" ";} 
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
