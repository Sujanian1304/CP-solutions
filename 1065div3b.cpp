    
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
        int n;cin>>n;
       vector<int> a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       if(a[0]!=-1&&a[n-1]!=-1){
        for(int i=0;i<n;i++){
            if(a[i]==-1) a[i]=0;
        }
       }
       else{
          if(a[0]==-1) a[0]=a[n-1];
          else a[n-1]=a[0];
          for(int i=0;i<n;i++){
            if(a[i]==-1) a[i]=0;
        }
       }
       cout<<abs(a[0]-a[n-1])<<"\n";
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