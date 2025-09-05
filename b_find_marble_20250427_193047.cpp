/*
 * Problem: B. Find Marble
 * URL: https://codeforces.com/problemset/problem/285/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,k;cin>>n>>m>>k;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int cnt=1;int s=m;
	if(s==k) {cout<<"0\n";return;}
	while(k!=arr[s]){
		cnt++;
		if(s==arr[s]){cout<<"-1\n";return;}
		s=arr[s];
		if(s==m){cout<<"-1\n";return;}
		
	}
	cout<<cnt<<"\n";
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
