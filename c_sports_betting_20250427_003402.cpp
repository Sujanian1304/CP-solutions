/*
 * Problem: C. Sports Betting
 * URL: https://codeforces.com/contest/2098/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>arr(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	vector<int> brr;vector<int> ans;int cnt=0;
	for(auto&v:mp){
		brr.push_back(v.second);
		if(v.second>=4){cout<<"Yes\n";return;}
		if(v.second>=2){cnt++;ans.push_back(v.first);}
		
	}
		if(cnt>=2){
			for(int i=0;i<(int)ans.size()-1;i++){
				int x=ans[i];int y=ans[i+1];bool flag=1;
				for(int j=x;j<=y;j++){
					if(mp[j]==0){flag=0;break;}
				}
				if(flag){cout<<"yes\n";return;}
			}
		}
	cout<<"no\n";
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
