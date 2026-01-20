    /*
     * Problem: B. Hourglass
     * URL: https://codeforces.com/contest/2184/problem/B
     * Time Limit: 1.0 seconds
     * Memory Limit: 256 MB
     */
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
        int s,k,m;cin>>s>>k>>m;
        if(s>k){
    		m=m%(2*k);
    		if(m<k) cout<<s-m<<"\n";
    		else cout<<2*k-m<<"\n";
    	}else{
    		m=m%k;
    		if(m<s) cout<<s-m<<"\n";
    		else cout<<"0\n";
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