/*
 * Problem: B. Make Array Good
 * URL: https://codeforces.com/contest/1762/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
		cin>>s[i];
	}
	vector<pair<int,int>> ans;
	for(int i=0;i<n;i++){
		int x=s[i];int s=0;
		for(int j=0;j<61;j++){
			if((1LL<<j)>=x){s=j;break;}
		}
		ans.push_back({i+1,(1LL<<s)-x});
		
	}
	cout<<ans.size()<<"\n";
	for(auto&v:ans){
		cout<<v.first<<" "<<v.second<<"\n";
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
