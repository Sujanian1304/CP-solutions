/*
 * Problem: A. Milya and Two Arrays
 * URL: https://codeforces.com/problemset/problem/2059/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    set<int> arr1;set<int> arr2;
    for(int i=0;i<n;i++){int x;cin>>x;arr1.insert(x);}
    for(int i=0;i<n;i++){int x;cin>>x;arr2.insert(x);}
    int a=arr1.size();
    int b=arr2.size();
    if(a>=3||b>=3) cout<<"YES\n";
    else if(a>=2&&b>=2) cout<<"YES\n";
    else cout<<"NO\n";
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
