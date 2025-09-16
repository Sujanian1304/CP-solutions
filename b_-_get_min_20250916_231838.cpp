/*
 * Problem: B - Get Min
 * URL: https://atcoder.jp/contests/abc419/tasks/abc419_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
		int b;cin>>b;
		if(b==1){
			int c;cin>>c;
			arr.push_back(c);
		}else{
			sort(arr.begin(),arr.end());
			cout<<arr[0]<<"\n";
			reverse(arr.begin(),arr.end());
			arr.pop_back();
		}
	}
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
