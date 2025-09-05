/*
 * Problem: B - Restaurant Queue
 * URL: https://atcoder.jp/contests/abc402/tasks/abc402_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    deque<int> arr;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		if(a==1){int b;cin>>b;arr.push_back(b);}
		else if(a==2){
			int z=arr.front();
			cout<<z<<"\n";
			arr.pop_front();
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
