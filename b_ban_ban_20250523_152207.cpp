/*
 * Problem: B. BAN BAN
 * URL: https://codeforces.com/contest/1747/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s="BAN";
    string t="";
    for(int i=0;i<n;i++){t+=s;}
    int x=t.size();
    vector<pair<int,int>> ans;
    int lo=1;int hi=x-1;
    while(lo<=hi){
		swap(t[lo],t[hi]);
		ans.push_back({lo,hi});
		lo+=3;hi-=3;
	}
	cout<<ans.size()<<"\n";
	for(auto&v:ans){cout<<v.first+1<<" "<<v.second+1<<"\n";}
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
