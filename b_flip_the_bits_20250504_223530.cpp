/*
 * Problem: B. Flip the Bits
 * URL: https://codeforces.com/problemset/problem/1504/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s,t;cin>>s>>t;
     vector<int> pref0(n+1, 0), pref1(n+1, 0);
    for(int i = 0; i < n; i++){
        pref0[i+1] = pref0[i] + (s[i] == '0');
        pref1[i+1] = pref1[i] + (s[i] == '1');
    }

    int rev = 0;  
    for(int i = n-1; i >= 0; i--){
        char cur = rev ? (s[i] == '1' ? '0' : '1') : s[i];

        if(cur == t[i]) {
          
            continue;
        }
        int zeros = pref0[i+1], ones = pref1[i+1];
        if(zeros != ones){
            cout << "NO\n";
            return;
        }

        rev ^= 1;
    }

	  cout<<"YES\n";
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
