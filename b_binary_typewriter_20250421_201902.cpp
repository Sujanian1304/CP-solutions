/*
 * Problem: B. Binary Typewriter
 * URL: https://codeforces.com/contest/2103/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;string s;cin>>s;
     int m0 = (s[0]=='1');
        for(int i = 0; i+1 < n; i++){
            if(s[i] != s[i+1]) 
                m0++;
        }
        int t01 = 0, t10 = 0;
        if(s[0]=='1') 
            t01++;
        for(int i = 0; i+1 < n; i++){
            if(s[i]=='0' && s[i+1]=='1') 
                t01++;
            else if(s[i]=='1' && s[i+1]=='0') 
                t10++;
        }
        int save = 0;
        if(t01 >= 2 || t10 >= 2) {
            save = 2;
        }
        else if(t01 >= 1 && t10 >= 1) {
            save = 1;
        }
        int ans = n + m0 - save;
        cout << ans << "\n";
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
