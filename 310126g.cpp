    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
       int n;cin>>n;
        vector<int> a(n), b(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];
     
        int lo=0,hi=0;
     
        for(int i=0;i<n;i++) {
            int newLo=min(lo-a[i],b[i]-hi);
            int newHi=max(hi-a[i],b[i]-lo);
                lo=newLo;
                hi=newHi;
            }
     
            cout<<hi<<"\n";
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