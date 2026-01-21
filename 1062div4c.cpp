        #include <bits/stdc++.h>
        using namespace std;
        #define int long long
         
        void solve() {
            // Your solution here
            int n;cin>>n;
            vector<int> a(n);
            int pare=0;int paro=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2) paro+=1;
                else pare+=1;
            }
            if(pare>0&&paro>0){
                sort(a.begin(),a.end());
                for(int i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<"\n";
            }else{
                 for(int i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<"\n";
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

