    #include <bits/stdc++.h>
            using namespace std;
            #define int long long
              bool isPrime(int s) {
                     for (int i=2;i*i<=s;i++) {
                        if (s%i==0)
                            return false;
                    }
                return true;
                }
            void solve() {
                // Your solution here
                int n;cin>>n;
                vector<int> a(n);
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }
                vector<int> prime;
                for(int i=2;i<100;i++){
                    if(isPrime(i)) prime.push_back(i);
                }
                int x=prime.size();
                for(int i=0;i<x;i++){
                    for(int j=0;j<n;j++){
                        if(a[j]%prime[i]){
                            cout<<prime[i]<<"\n";
                            return;
                        }
                    }
                }
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