/*
 * Problem: D. Tung Tung Sahur
 * URL: https://codeforces.com/contest/2094/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     string s,t; 
    cin >>s>>t; 
       vector<pair<char,int>> a,b;
       for(char &x:s){
		   if(a.empty()){a.push_back({x,1});}
		   else if(a.back().first==x){a.back().second++;}
		   else a.push_back({x,1});
	   }
	   for(char &x:t){
		   if(b.empty()){b.push_back({x,1});}
		   else if(b.back().first==x){b.back().second++;}
		   else b.push_back({x,1});
	   }
	   if(a.size()!=b.size()){cout<<"NO\n";return;}
	   else{
		   for(int i=0;i<a.size();i++){
			   char sf=a[i].first;char tf=b[i].first;
			   int ss=a[i].second;int ts=b[i].second;
			   if(sf!=tf||ss>ts||ts>2*ss){cout<<"NO\n";return;}
		   }
	   }
	   cout<<"YES\n";
	
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
