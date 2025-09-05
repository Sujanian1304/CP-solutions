/*
 * Problem: C. Card Game
 * URL: https://codeforces.com/contest/2104/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool> A(n+1,0),B(n+1,0);
        for (int i = 0; i < n; i++) {
            if (s[i]=='A') A[i+1]=1;
            else B[i+1]=1;
        }
        int maxB = 0;
        bool bB = B[1];
        int m_1 = 0;  
        for (int b = 1; b <= n; b++) {
            if (!B[b]) continue;
            maxB = max(maxB, b);
            if (b != n) m_1 = max(m_1, b);
        }
        bool aliceW =0;
        for (int a = 1; a <= n && !aliceW; a++) {
            if (!A[a]) continue;

            bool bb =0;
            if (a > 1 && a < n) {
                bb = (maxB > a);
            }
            else if (a == n) {
                bb =bB;
            }
            else { 
                bb=(m_1 > 1);
            }

            if (!bb) {
                aliceW=1;
            }
        }

        cout << (aliceW?"Alice\n" : "Bob\n");
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
