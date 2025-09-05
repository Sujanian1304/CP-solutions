/*
 * Problem: B - Full House 3
 * URL: https://atcoder.jp/contests/abc398/tasks/abc398_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int arr[7];map<int,int> mp;
    for(int i=0;i<7;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int cnt2=0;int cnt3=0;
	for(auto&v:mp) {if(v.second>=2) cnt3++;if(v.second>=3) cnt2++;}
	if(cnt2>=1&&cnt3>1) cout<<"Yes\n";
	else cout<<"No\n";
	
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
