/*
 * Problem: B. Suffix Structures
 * URL: https://codeforces.com/problemset/problem/448/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;cin>>s>>t;
    map<char,int> mp,mp1;
    int n=s.size();int y=t.size();
    for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	for(int i=0;i<y;i++){
		mp1[t[i]]++;
	}
	for(auto&v:mp1){
		auto it=mp.find(v.first);
		if(it==mp.end()){cout<<"need tree"; return;}
		if(it->second<v.second){cout<<"need tree"; return;}
	}
	if(n==y) {cout<<"array";return;}
	if(n>y){
		vector<int> ans;
			for(int i=0;i<n;i++){
				if(s[i]==t[0]) ans.push_back(i);
			}
			//if(ans.back()==n-1){cout<<"both";return;}
			for(auto&v:ans){
			string x="";x+=t[0];int z=1;
			for(int i=v+1;i<n;i++){
				if(s[i]==t[z]) {x+=t[z];z++;}
			}
			if(x==t){ cout<<"automaton";return;}
		}
			 cout<<"both";return;
		}
		cout<<"need tree";
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
