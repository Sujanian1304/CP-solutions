/*
 * Problem: B. Array Fix
 * URL: https://codeforces.com/contest/1948/problem/B
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
	vector<int> ans;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			if(arr[i]>=10){
		vector<int> arr1;
		while(arr[i]!=0){
			int x=arr[i]%10;
			arr1.push_back(x);
			arr[i]/=10;
		}
		reverse(arr1.begin(),arr1.end());
		for(auto&v:arr1) ans.push_back(v);
	}else ans.push_back(arr[i]);
	}else  ans.push_back(arr[i]);	
}
ans.push_back(arr[n-1]);
bool flag=1;
 for(int i=0;i<ans.size()-1;i++){
	 //cout<<ans[i];
	 if(ans[i]>ans[i+1]) {flag=0;break;} 
	 
 }
 if(flag) cout<<"YES\n";
 else cout<<"NO\n";
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
