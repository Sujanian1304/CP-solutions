/*
 * Problem: A. Flipping Game
 * URL: https://codeforces.com/contest/327/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int cnt=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1) cnt++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int x=cnt;
		for(int j=i;j<n;j++){
			if(arr[j]==1){
				x-=1;
			}
			else x+=1;
			ans=max(ans,x);
		}
	}
	 cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
