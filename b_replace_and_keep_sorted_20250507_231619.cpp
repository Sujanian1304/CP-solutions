/*
 * Problem: B. Replace and Keep Sorted
 * URL: https://codeforces.com/problemset/problem/1485/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,q,k;;cin>>n>>q>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<q;i++){
		int b,c;cin>>b>>c;int cnt=0;
		b--;c--;
		cnt+=k+(a[c]-a[b]+1)-2*(c-b+1);
		cout<<cnt<<"\n";
   }
		 
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
