        #include <bits/stdc++.h>
        using namespace std;
        #define int long long
         
        void solve() {
            // Your solution here
           int n,a,b;cin>>n>>a>>b;
           vector<int> arr(n);int sum=0;
           for(int i=0;i<n;i++){
               cin>>arr[i];
               sum+=arr[i];
           }
           int x=a-sum;
           
           if(x%b||x<0) cout<<"no\n";
           else cout<<"yes\n";
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