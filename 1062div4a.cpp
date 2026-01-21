        #include <bits/stdc++.h>
        using namespace std;
        #define int long long
         
        void solve() {
            // Your solution here
           int a,b,c,d;
           cin>>a>>b>>c>>d;
           if(a==b&&c==d&&a==c) cout<<"yes\n";
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