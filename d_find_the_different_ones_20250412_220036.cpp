/*
 * Problem: D. Find the Different Ones!
 * URL: https://codeforces.com/contest/1927/problem/D
 * Time Limit: 5.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 vector<int> p(n);p[0]=-1;
	 for(int i=1;i<n;i++){
		 if(arr[i]!=arr[i-1]) p[i]=i-1;
		 else p[i]=p[i-1];
	 }
	 int q;cin>>q;
     for(int i=0;i<q;i++){
		 int a,b;cin>>a>>b;a--,b--;
		 if(p[b]>=a){cout<<p[b]+1<<" "<<b+1;cout<<"\n";}
		 else cout<<"-1 -1\n";
	 }  
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
