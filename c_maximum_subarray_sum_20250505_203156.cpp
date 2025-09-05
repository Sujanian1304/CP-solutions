/*
 * Problem: C. Maximum Subarray Sum
 * URL: https://codeforces.com/contest/2107/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll=long long;
const ll NEG = -1000000000000000000LL; // -1e18

void solve() {
    // Your solution here
     int n;int k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n), b(n);
        for (int i=0;i<n;i++) {
            cin >> a[i];
            b[i]=(s[i]=='1'?a[i]:0);
        }
        int pure_max=0;
        int cur_sum=0;
        for (int i=0;i<n;i++) {
            if (s[i]=='0') {
                cur_sum=0;
            } else {
                cur_sum=max(0LL, cur_sum) + a[i];
                pure_max=max(pure_max, cur_sum);
            }
        }
        if (pure_max>k) {
            cout << "No\n";
            return;
        }
        vector<int> ans(n,NEG);
        if (pure_max==k) {
            cout << "Yes\n";
            for (int i = 0; i < n; i++) {
                cout << (s[i] == '1' ? a[i] : NEG)
                     << (i+1 == n ? '\n' : ' ');
            }
            return;
        }
        int N = n;
        vector<int> prefix(N+1);
        for (int i = 0; i < N; i++) {
            prefix[i+1] = prefix[i] + b[i];
        }

        vector<int> mi(N+1), nz(N+1);
        for (int i = 1; i <= N; i++) {
            mi[i] = prefix[i] < prefix[mi[i-1]] ? i : mi[i-1];
            nz[i] = nz[i-1] + (s[i-1] == '0');
        }

        int full = 0;
        cur_sum = 0;
        for (int i = 0; i < N; i++) {
            cur_sum = max(0LL, cur_sum) + b[i];
            full = max(full, cur_sum);
        }

        bool done = false;
      
        for (int i = 1;i<=N&&!done;i++) {
            if (prefix[i]-prefix[mi[i-1]]==full) {
                int L = mi[i-1], R = i-1;
                if (nz[R+1] - nz[L] > 0) {
                    int pos = L;
                    while (s[pos] != '0') pos++;
                    int delta = k - full;
                    for (int j = L; j <= R; j++) {
                        if (s[j] == '1') ans[j] = a[j];
                        else ans[j] = (j == pos ? delta : 0);
                    }
                    cout << "Yes\n";
                    for (int j = 0; j < n; j++) {
                        cout << ans[j] << (j+1==n? '\n':' ');
                    }
                    done = true;
                }
            }
        }
        if (done) return;
        for (int i = 0; i < n && !done; i++) {
            if (s[i] == '0') {
                bool bad = false;
                if (i>0&&s[i-1]=='1'&&a[i-1]>0) bad = true;
                if (i+1<n&&s[i+1]=='1'&&a[i+1]>0) bad = true;
                if (!bad) {
                    // use [i,i]
                    ans[i] = k;
                    for (int j=0;j<n;j++) {
                        if (s[j] == '1') ans[j] = a[j];
                    }
                    cout << "Yes\n";
                    for (int j = 0; j < n; j++) {
                        cout << ans[j] << (j+1==n? '\n':' ');
                    }
                    done = true;
                }
            }
        }

        if (!done) cout << "No\n";
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
