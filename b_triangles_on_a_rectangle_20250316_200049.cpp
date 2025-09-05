/*
 * Problem: B. Triangles on a Rectangle
 * URL: https://codeforces.com/contest/1620/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int w,h;cin>>w>>h;
    int a;cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){cin>>arr[i];}
    int b;cin>>b;
    int arr1[b];
    for(int i=0;i<b;i++){cin>>arr1[i];}
    int c;cin>>c;
    int arr2[c];
    for(int i=0;i<c;i++){cin>>arr2[i];}
    int d;cin>>d;
    int arr3[d];
    for(int i=0;i<d;i++){cin>>arr3[i];}
    int ans=0;	
    int x=(arr[a-1]-arr[0])*h;
    ans=max(ans,x);
    x=(arr1[b-1]-arr1[0])*h;
    ans=max(ans,x);
    x=(arr2[c-1]-arr2[0])*w;
    ans=max(ans,x);
    x=(arr3[d-1]-arr3[0])*w;
    ans=max(ans,x);
    cout<<ans<<"\n";
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
