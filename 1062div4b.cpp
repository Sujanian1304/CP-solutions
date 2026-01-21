        #include <bits/stdc++.h>
        using namespace std;
        #define int long long
         
        void solve() {
            // Your solution here
           int n;cin>>n;
           string s,t;cin>>s>>t;
           sort(s.begin(), s.end());
           sort(t.begin(), t.end());
           if(s==t) cout<<"yes\n";
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