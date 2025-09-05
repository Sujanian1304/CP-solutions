/*
 * Problem: B. MIN = GCD
 * URL: https://codeforces.com/contest/2084/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);map<int,int> mp;int mi=1e18;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		mi=min(mi,arr[i]);
	}
	if(mp[mi]>=2) cout<<"YES\n";
	else{
		vector<int>arr1;
		for(int i=0;i<n;i++){
			if(arr[i]%mi==0&&arr[i]!=mi) arr1.push_back(arr[i]);
		}
		if(arr1.size()==0) cout<<"NO\n";
		else{
		int ans=arr1[0];
		for(int i=1;i<arr1.size();i++){
			ans=gcd(arr1[i],ans);
		}
		if(ans==mi) cout<<"YES\n";
		else cout<<"NO\n";
	}
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
