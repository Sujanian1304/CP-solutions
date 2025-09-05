/*
 * Problem: C. Chamo and Mocha's Array
 * URL: https://codeforces.com/contest/1975/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		int m=0;
		if(n>=3){
		for(int i=0;i<n-2;i++){
			vector<int> s(3);s={arr[i],arr[i+1],arr[i+2]};
				sort(s.begin(),s.end());
				m=max(s[1],m);
			}
			cout<<m<<"\n";
		}else{
			cout<<min(arr[0],arr[1])<<"\n";
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
