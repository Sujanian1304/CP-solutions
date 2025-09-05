/*
 * Problem: C. Brr Brrr Patapim
 * URL: https://codeforces.com/contest/2094/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(2*n+1);vector<int> ans(2*n+1,0);
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int a;cin>>a;
			ans[a]=1;
			arr[i+j]=a;
		}
	}
	for(int i=1;i<=2*n;i++){
		if(ans[i]==0) {arr[1]=i;break;}
	}
	for(int i=1;i<=2*n;i++) cout<<arr[i]<<" ";
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
