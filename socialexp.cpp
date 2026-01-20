    /*
     * Problem: A. Social Experiment
     * URL: https://codeforces.com/contest/2184/problem/A
     * Time Limit: 1.0 seconds
     * Memory Limit: 256 MB
     */
     
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve() {
        // Your solution here
        int n;cin>>n;
        if(n<=3){
    		cout<<n<<"\n";
    		return;
    	}
        if(n%2==0){
    		cout<<"0\n";
    	}
    	else{
    		cout<<"1\n";
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