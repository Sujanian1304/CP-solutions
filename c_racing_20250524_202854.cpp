/*
 * Problem: C. Racing
 * URL: https://codeforces.com/contest/2110/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int n;
        cin >> n;
        vector<int> d(n);
        for(int i = 0; i < n; i++){
            cin >> d[i]; 
        }
        vector<int> L(n+1), R(n+1);
        vector<int> lo(n),hi(n);
        for(int i = 0; i < n; i++){
            cin>>lo[i]>>hi[i];
        }
        L[0]=R[0]=0;
        bool ok =1;
        for(int i=1;i<=n;i++){
            int L0,R0;
            if(d[i-1]==0){
				 L0=L[i-1],R0= R[i-1];
			 }
            else if(d[i-1]== 1){
				L0=L[i-1]+1,R0= R[i-1]+1;
			}
            else{
				 L0=L[i-1],R0=R[i-1]+1;
			}
            L[i] = max(L0,lo[i-1]);
            R[i] = min(R0,hi[i-1]);
            if(L[i]>R[i]){
                ok=0;
                break;
            }
        }

        if(!ok){
            cout << "-1\n";
            return;
        }
        vector<int> h(n+1);
        h[n]=L[n];
        vector<int> ans=d; 
        for(int i=n;i>=1;i--){
            if(ans[i-1]==0||ans[i-1]==1){
                
                h[i-1]=h[i]-ans[i-1];
            } else {
                if(L[i-1]<=h[i]&&h[i]<=R[i-1]){
                    ans[i-1]=0;
                    h[i-1]=h[i];
                } else {
                    ans[i-1]=1;
                    h[i-1]=h[i]-1;
                }
            }
           
            if(h[i-1]<L[i-1]||h[i-1]>R[i-1]){
                ok =0;
                break;
            }
        }

        if(!ok){
            cout << "-1\n";
        } else {
            for(int i = 0; i < n; i++){
                cout << ans[i] <<" ";
            }
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
