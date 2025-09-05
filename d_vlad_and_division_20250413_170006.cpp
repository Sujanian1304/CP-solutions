/*
 * Problem: D. Vlad and Division
 * URL: https://codeforces.com/contest/1926/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		mp[a]++;
	}
	int group=0;
	for(auto&v:mp){
		int x=0;
		for(int j=0;j<31;j++){
			int z=(v.first>>j)&1;
			x+=(1-z)*(1<<(j));
		}
		//cout<<x<<" ";
		auto it=mp.find(x);
		if(it!=mp.end()){
			group+=max(v.second,it->second);
			mp.erase(it);
		}
		else {group+=v.second;}
	}
		cout<<group<<"\n";
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
