/*
 * Problem: C. Jumping on Tiles
 * URL: https://codeforces.com/contest/1729/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    if(s[0]<=s[n-1]){
		char r=s[0];char l=s[n-1];
		vector<pair<char,int>> arr;
     for(int i=1;i<n-1;i++){
	   if(s[i]>=r&&s[i]<=l) arr.push_back({s[i],i+1});
     }
     sort(arr.begin(),arr.end());
     cout<<l-r<<" "<<arr.size()+2<<"\n";
     cout<<1<<" ";
     for(auto&v:arr) cout<<v.second<<" ";
     cout<<n<<"\n";
 }else{
	 char r=s[0];char l=s[n-1];
		vector<pair<char,int>> arr;
     for(int i=1;i<n-1;i++){
	   if(s[i]<=r&&s[i]>=l) arr.push_back({s[i],i+1});
     }
     sort(arr.begin(),arr.end());
     reverse(arr.begin(),arr.end());
     cout<<r-l<<" "<<arr.size()+2<<"\n";cout<<"1 ";
     for(auto&v:arr) cout<<v.second<<" ";
     cout<<n<<"\n";
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
