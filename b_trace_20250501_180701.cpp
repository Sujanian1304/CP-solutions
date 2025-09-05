/*
 * Problem: B. Trace
 * URL: https://codeforces.com/problemset/problem/157/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long double
int pie=3.1415926536;

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int ans=0;	long long m=n;
	for(int i=n-1;i>=((m%2)?2:1);i-=2){
		int x=a[i]*a[i];int y=a[i-1]*a[i-1];
		ans+=(x-y);
	}
	if(m%2){ans+=(a[0]*a[0]);}
	ans*=pie;
	cout<<fixed<<setprecision(10)<<ans<<"\n";
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
