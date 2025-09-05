/*
 * Problem: F. Eating Candies
 * URL: https://codeforces.com/contest/1669/problem/F
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
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
	int ans=0;
	int lo=0;int hi=n-1;int sum1=arr[lo];int sum2=0;int cnt=1;
	while(lo<=hi){
		if(sum1==sum2){ans=cnt;}
		if (sum1 <= sum2) {
        sum1 += arr[++lo];//cout<<sum1<<" "<<sum2<<" ";
    } else {
        sum2 += arr[hi--];
    }
    cnt++;
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
