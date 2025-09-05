/*
 * Problem: B. Chat Online
 * URL: https://codeforces.com/problemset/problem/469/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,a,b;cin>>n>>m>>a>>b;
    vector<pair<int,int>> aa(n),bb(m);
    for(int i=0;i<n;i++){
       cin>>aa[i].first>>aa[i].second;
   }
   sort(aa.begin(),aa.end());
   for(int i=0;i<m;i++){
       cin>>bb[i].first>>bb[i].second;
   }
   int ans=0;
    for(int i=a;i<=b;i++){
	  for(int j=0;j<m;j++){
       int x=bb[j].first+i;int y=bb[j].second+i;bool flag=0;
       //cout<<x<<" "<<y<<" ";
       for(int k=0;k<n;k++){
		   if(x>=aa[k].first&&x<=aa[k].second){flag=1;break;}
		   else if(y<=aa[k].second&&y>=aa[k].first){flag=1;break;}
		   else if(x<=aa[k].first&&y>=aa[k].second){flag=1;break;}
	   }
	   if(flag){ans++;break;}
      } 
  }
  cout<<ans;
    
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
