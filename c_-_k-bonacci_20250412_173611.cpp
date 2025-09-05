/*
 * Problem: C - K-bonacci
 * URL: https://atcoder.jp/contests/abc401/tasks/abc401_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9;
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr;int sum=0;
   // if(m>=n){ cout<<"1\n"; return;}
    for(int i=0;i<m;i++){
		arr.push_back(1);
		sum+=1;
	}
	for(int i=m;i<=n;i++){
		arr.push_back(sum);
		sum=(sum+arr[i])%mod;
		sum=(sum-arr[i-m]+mod)%mod;
	}
	//cout<<arr[n];
	cout<<arr[n]%mod<<"\n";
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
