/*
 * Problem: C. Social Distance
 * URL: https://codeforces.com/problemset/problem/1367/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;cin>>s;int cnt1=0;vector<int> a;
    for(int i=0;i<n;i++) {if(s[i]=='1') {cnt1++;a.push_back(i);}}
    if(cnt1==0){
    int x=(n+m)/(m+1);
    cout<<x<<"\n";
   }else{
	   int cnt=0;
	   if(a[0]-1>=m) {cnt+=(a[0])/(m+1);}
	   for(int i=0;i<(int)a.size()-1;i++){
		   if(a[i+1]-a[i]+1>=2*m+3){
			   cnt+=(a[i+1]-a[i]+1+m)/(m+1)-2;
		   }
	   }
	   if(a.back()!=n-1){
		   cnt+=(n-1-a.back())/(m+1);
	   }
	   cout<<cnt<<"\n";
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
