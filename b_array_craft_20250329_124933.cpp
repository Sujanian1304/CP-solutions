/*
 * Problem: B. Array Craft
 * URL: https://codeforces.com/contest/1990/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,x,y;cin>>n>>x>>y;
    vector<int> arr(n,1);int j=0;
    for(int i=x;i<n;i++){
		if(j%2) arr[i]=1;
		else arr[i]=-1;
		j++;
	}
	j=0;
	for(int i=y-2;i>=0;i--){
		if(j%2) arr[i]=1;
		else arr[i]=-1;
		j++;
	}
	for(auto&v:arr) cout<<v<<" ";
	cout<<"\n";
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
