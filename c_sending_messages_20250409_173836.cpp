/*
 * Problem: C. Sending Messages
 * URL: https://codeforces.com/contest/1921/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,f,a,b;cin>>n>>f>>a>>b;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> brr(n);
	brr[0]=(arr[0]-0)*a;
	for(int i=1;i<n;i++){
		brr[i]=(arr[i]-arr[i-1])*a;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=min(brr[i],b);
	}
	if(sum<f) cout<<"YES\n";
	else cout<<"NO\n";
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
