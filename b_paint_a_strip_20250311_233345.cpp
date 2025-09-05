/*
 * Problem: B. Paint a Strip
 * URL: https://codeforces.com/contest/2040/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;
void solve() {
    // Your solution here
    int x;cin>>x;
    auto y=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout<<y+1<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    arr.push_back(1);
    int x=1;
    while(x<=1e5){
		x=x*2+2;
		arr.push_back(x);
	}
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
