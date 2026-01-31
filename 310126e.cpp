        #include <bits/stdc++.h>
        using namespace std;
        #define int long long
         
        void solve() {
            // Your solution here
           int n;cin>>n;
           vector<int> a(n),b(n);
           for(int i=0;i<n;i++){
               cin>>a[i];
               b[i]=a[i];
           }
           sort(b.begin(),b.end());reverse(b.begin(),b.end());int ind=0;int ans=0;int ind1=0;
           for(int i=0;i<n;i++){
               if(a[i]!=b[i]) {ans=b[i];ind=i;break;}
           }
           for(int i=0;i<n;i++){
               if(a[i]==ans) {ind1=i;break;}
           }
           int c=ind1;
           for(int i=ind;i<=(ind+ind1)/2;i++){
               int temp=a[i];
               a[i]=a[c];
               a[c]=temp;
               c--;
           }
           for(int i=0;i<n;i++){
               cout<<a[i]<<" ";
           }
           cout<<"\n";
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