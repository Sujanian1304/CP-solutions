/*
 * Problem: B - P(X or Y)
 * URL: https://atcoder.jp/contests/abc407/tasks/abc407_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int x,y;cin>>x>>y;
    set<pair<int,int>> st;
    for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(i+j>=x){
			st.insert({i,j});
			st.insert({j,i});
		}
	}
}
	set<pair<int,int>> st1;
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(abs(i-j)>=y) {
		   st.insert({i,j});
		   st.insert({j,i});
	   }
	}
  }
  //for(auto&v:st){cout<<v.first<<" "<<v.second<<" ";}
  double ans=st.size();
  //cout<<ans;
  double s=(double)(ans/(double)36);
  cout<<fixed<<setprecision(10)<<s<<"\n";
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
