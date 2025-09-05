/*
 * Problem: B. Game with Colored Marbles
 * URL: https://codeforces.com/contest/2042/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);vector<pair<int,int>> b;map<int,int> mp;
    for(int i=0;i<n;i++){ cin>>a[i];mp[a[i]]++;}
    for(auto&v:mp){
		b.push_back({v.second,v.first});
	}
	sort(b.begin(),b.end());
	int cnt=0;
	for(int i=0;i<(int)b.size();i++){
		if(b[i].first==1){
			if(i%2==0) cnt+=2;
		}
		else cnt+=1;
	}
	cout<<cnt<<"\n";
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
