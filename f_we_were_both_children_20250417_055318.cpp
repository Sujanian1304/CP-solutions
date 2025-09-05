/*
 * Problem: F. We Were Both Children
 * URL: https://codeforces.com/contest/1850/problem/F
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> freq(n+1,0);
	for(auto&v:arr){if(v<=n) freq[v]++;}
	sort(arr.begin(),arr.end());
	vector<int> pos(n+1,0);
	for(int i=1;i<=n;i++){
		if(freq[i]==0) continue;
		for(int j=i;j<=n;j+=i){
			pos[j]+=freq[i];
		}
	}
	int ma=0;
	for(auto&v:pos) ma=max(ma,v);
	cout<<ma<<"\n";
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
