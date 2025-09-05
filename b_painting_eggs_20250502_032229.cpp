/*
 * Problem: B. Painting Eggs
 * URL: https://codeforces.com/problemset/problem/282/B
 * Time Limit: 5.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;string t="";
    int suma=0;int sumb=0;
    int a,b;cin>>a>>b;
    if(a<b){suma+=a;t+='A';}
    else {sumb+=b;t+='G';}
    n--;
    while(n--){
    int a,b;cin>>a>>b;
    if((suma+a)-sumb>500){sumb+=b;t+='G';}
    else {suma+=a;t+='A';}
   }
   cout<<t<<"\n"; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
