/*
 * Problem: C. Cirno and Operations
 * URL: https://codeforces.com/contest/2062/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
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
	int ans=-1e18;int y=n;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int i=0;i<y;i++){sum+=arr[i];}
		if(i==0) ans=max(ans,sum);
		else ans=max(ans,max(sum,(-sum)));
		for(int i=0;i<n-1;i++){
			arr[i]=arr[i+1]-arr[i];
		}
		y--;
	}
	cout<<ans<<"\n";
			
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
