/*
 * Problem: C. Update Queries
 * URL: https://codeforces.com/problemset/problem/1986/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    string s;cin>>s;
     int arr[m];map<int,int> mp;
     for(int i=0;i<m;i++){
		 cin>>arr[i];
		 mp[arr[i]]++;
	 }
	 string d;cin>>d;
	 sort(arr,arr+m);
	 sort(d.begin(),d.end());
	 deque<char> dq(d.begin(),d.end());
	 vector<pair<int,char>> ans;
	 for(auto&v:mp){
		 while(mp[v.first]>1){
			 dq.pop_back();
			 mp[v.first]--;
		 }
		char x=dq.front();
		ans.push_back({v.first,x});
		dq.pop_front();
	}
	for(auto&v:ans){
		s[v.first-1]=v.second;
	}
	cout<<s<<"\n";
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
