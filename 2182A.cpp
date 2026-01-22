            #include <bits/stdc++.h>
            using namespace std;
            #define int long long
             
            void solve() {
                // Your solution here
                int n;cin>>n;
                string s;cin>>s;bool flag=0;
                for(int i=0;i<=n-4;i++){
                    string t=s.substr(i,4);
                    if(t=="2026"){
                        cout<<"0\n";
                        return;
                    }
                    if(t=="2025") flag=1;
                }
                if(flag) cout<<"1\n";
                else cout<<"0\n";
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