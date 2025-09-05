/*
 * Problem: S to T
 * URL: https://www.codechef.com/START183C/problems/STOT
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t; vector<int> ans;

    if (s[0] != t[0]) {
        cout << -1 << "\n";
        return ;
    }
    
    for (int i = n - 1; i > 0; i--) { 
        if (s[i] != t[i]) {
            if (s[i-1] == '1') {
                ans.push_back(i);
                s[i] = (s[i] == '0' ? '1' : '0');
            } else {
                bool found = false;
               
                for (int j = i - 2; j >= 0; j--) {
                    if (s[j] == '1') {
                        
                        ans.push_back(j + 1); 
                        s[j+1] = (s[j+1] == '0' ? '1' : '0');
                   
                        for (int k = j + 1; k < i; k++) {
                            ans.push_back(k + 1); 
                            s[k+1] = (s[k+1] == '0' ? '1' : '0');
                        }
                        ans.push_back(i);
                        s[i] = (s[i] == '0' ? '1' : '0');
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << -1 << "\n";
                    return;
                }
            }
        }
    }

    if (ans.size() > 3 * n) {
        cout << -1 << "\n";
        return;
    }

    cout << ans.size() << "\n";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << "\n";
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
