/*
 * Problem: C. Wrong Addition
 * URL: https://codeforces.com/problemset/problem/1619/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string a,s;
        cin>>a>>s;
        int i = (int)a.size()-1;
        int j = (int)s.size()-1;
        vector<int> b;
        bool bad = false;
        while(i>=0){
            if(j<0){ bad = true; break; }
            int da = a[i]-'0';
            int ds = s[j]-'0';
            if(ds >= da){
                b.push_back(ds-da);
                i--; j--;
            } else {
                
                if(j==0){ bad = true; break; }
                int ds2 = (s[j-1]-'0')*10 + ds;
                int v = ds2 - da;
                if(v<0 || v>9){ bad = true; break; }
                b.push_back(v);
                i--; j -= 2;
            }
        }
        if(bad){ cout<<"-1\n"; return; }
        
        while(j>=0){ b.push_back(s[j]-'0'); j--; }
       
        while(b.size()>1 && b.back()==0) b.pop_back();
        
        for(int k=(int)b.size()-1; k>=0; k--) cout<<b[k];
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
