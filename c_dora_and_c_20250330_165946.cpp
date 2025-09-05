/*
 * Problem: C. Dora and C++
 * URL: https://codeforces.com/contest/2007/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,a,b;cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int x=__gcd(a,b);
	vector<int> ans;
	for(int i=0;i<n;i++){
		ans.push_back(arr[i]%x);
	}
    sort(ans.begin(),ans.end());
    int fans=ans[n-1]-ans[0];
    for(int i=1;i<n;i++){
		fans=min(fans,(ans[i-1]+x)-ans[i]);
	}
	cout<<fans<<"\n";
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
