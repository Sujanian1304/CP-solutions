/*
 * Problem: C. Coin Rows
 * URL: https://codeforces.com/problemset/problem/1555/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> a(2,vector<int>(n));
    int sum1=0;int sum2=0;
    for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(i==0) sum1+=a[i][j];
			else sum2+=a[i][j];
		}
	}
	int i_sum1=0;int i_sum2=0;int ans=1e9;
	for(int i=0;i<n;i++){
		i_sum1+=a[0][i];
		if(i>0) i_sum2+=a[1][i-1];
		int rem1=sum1-i_sum1;int rem2=i_sum2;
		int f_rem=max(rem1,rem2);
		ans=min(f_rem,ans);
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
