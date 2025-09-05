/*
 * Problem: B. K-Sort
 * URL: https://codeforces.com/contest/1987/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans;int max_el=arr[0];
	for(int i=0;i<n-1;i++){
		if(max_el>arr[i+1]){
			ans.push_back(max_el-arr[i+1]);
		}
		else{
			max_el=arr[i+1];
		}
	}
	if(ans.size()>0){
	sort(ans.begin(),ans.end());
	int s=ans.size();
	int an=0;
	for(int i=0;i<s;i++){
		if(i==0) an+=(ans[i]*(s-i+1));
		else an+=((ans[i]-ans[i-1])*(s-i+1));
	}
	cout<<an<<"\n";
}
else cout<<"0\n";
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
