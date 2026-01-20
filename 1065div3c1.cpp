    
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
        int n;cin>>n;
       vector<int> a(n),b(n);
       int cnta=0;int cntb=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) cnta+=1;
       }
        for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==1) cntb+=1;
       }
       for(int i=0;i<n;i++){
          if(i%2) {
            if(cntb%2==0){
                if(a[i] == 1 && b[i] == 0) { cnta--; cntb++; }
                else if(a[i] == 0 && b[i] == 1) { cnta++; cntb--; }
                swap(a[i], b[i]);
            } 
          }else{
            if(cnta%2==0){
                if(a[i] == 1 && b[i] == 0) { cnta--; cntb++; }
                else if(a[i] == 0 && b[i] == 1) { cnta++; cntb--; }
                swap(a[i], b[i]);
            } 
          }
       }
       if(cnta%2>cntb%2) cout<<"Ajisai\n";
       else if(cntb%2>cnta%2)  cout<<"Mai\n";
       else cout<<"Tie\n";
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