    
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
        int n;cin>>n;
        if(n%2){cout<<"0\n";}
        else{
            cout<<n/4+1<<"\n";
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