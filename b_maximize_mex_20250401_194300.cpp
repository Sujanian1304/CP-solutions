/*
 * Problem: B. Maximize Mex
 * URL: https://codeforces.com/contest/2021/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);vector<int> cnt(n,0);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<n)cnt[arr[i]]+=1;
	}
	sort(arr.begin(),arr.end());
	if(arr[0]!=0) cout<<"0\n";
	else{
		for(int i=0;i<n;i++){
			if(cnt[i]==0) {cout<<i<<"\n";return;}
			else if(cnt[i]>=2) {
				if(i+m<n){
				cnt[i+m]+=cnt[i]-1;
				cnt[i]=1;
			}
			 }
			 }
			 cout<<n<<"\n";
		 }
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
