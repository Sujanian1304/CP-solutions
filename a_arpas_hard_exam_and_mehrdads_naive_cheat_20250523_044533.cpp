/*
 * Problem: A. Arpa’s hard exam and Mehrdad’s naive cheat
 * URL: https://codeforces.com/problemset/problem/742/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n==0) {cout<<"1\n";return;}
    n=n%4;
    if(n==0){cout<<"6\n";}
    else if(n==1){cout<<"8\n";}
    else if(n==2){cout<<"4\n";}
    else if(n==3){cout<<"2\n";}
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
