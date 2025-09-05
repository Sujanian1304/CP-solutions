/*
 * Problem: A. Square
 * URL: https://codeforces.com/contest/1921/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    vector<pair<int,int>> arr;
    for(int i=0;i<4;i++){
		int a,b;
		cin>>a>>b;
		arr.push_back({a,b});
	}
	sort(arr.begin(),arr.end());
	int ans=abs(arr[0].second-arr[1].second);
	cout<<ans*ans<<"\n";
		
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
