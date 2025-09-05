/*
 * Problem: B. Combinatorics Homework
 * URL: https://codeforces.com/contest/1574/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> arr(3);
    arr[0]=a;arr[1]=b;arr[2]=c;
    sort(arr.rbegin(),arr.rend());
    a=arr[0];
    b=arr[1];
    c=arr[2];
    //cout<<a<<b<<c;
    int maxpair=a-1+b-1+c-1;
    int minpair=max(0LL,a-(b+c+1));
    //cout<<maxpair<<minpair;
    if(d>=minpair&&d<=maxpair) cout<<"yes\n";
    else cout<<"no\n";
    
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
