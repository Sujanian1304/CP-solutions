/*
 * Problem: B. Asterisk-Minor Template
 * URL: https://codeforces.com/contest/1796/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;
    cin>>s>>t;int n=s.size();int m=t.size();
     set<string> st1,st2,st3;map<string,int> mp;
    for(int i=0;i<n;i++){
	 string x="";
	 x=s.substr(i,2);
	 mp[x]++;
     if(mp[x]>1) mp[x]=1;
	  st1.insert(x);
	  st3.insert(x);
    }
    
    for(int i=0;i<m;i++){
	 string x="";
	 x=t.substr(i,2);
	  st2.insert(x);
	  st3.insert(x);
    }
    string ans="";
    for(int i=0;i<m;i++){
		string x="";
	   x=t.substr(i,2);
		if(mp[x]==1) {ans=x;break;}
		else continue;
	}
   if(s[0]==t[0]){cout<<"YES\n"; cout<<s[0]<<"*\n";}
   else if(s[n-1]==t[m-1]){cout<<"YES\n"; cout<<"*"<<s[n-1]<<"\n";}
   else if(st3.size()!=(st1.size()+st2.size())){cout<<"YES\n"; cout<<"*"<<ans<<"*\n";}
   else cout<<"NO\n";
	   
    
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
