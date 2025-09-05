/*
 * Problem: B. Increase/Decrease/Copy
 * URL: https://codeforces.com/problemset/problem/1976/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[n+1];
	for(int i=0;i<=n;i++){
		cin>>arr1[i];
	}
	int ans=0;bool flag=1;int ans1=1e9;
	for(int i=0;i<n;i++){
		ans+=abs(arr[i]-arr1[i]);
		if(arr[i]>=arr1[n]){
			if(arr1[i]>=arr1[n]) ans1=min(abs(min(arr1[i],arr[i])-arr1[n])+1,ans1);
			else ans1=1;
		}else{
			if(arr1[i]>=arr1[n]) ans1=1;
			else ans1=min(abs(max(arr1[i],arr[i])-arr1[n])+1,ans1);
		}
	}
	cout<<ans+ans1<<"\n";
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
