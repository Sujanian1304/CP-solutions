/*
 * Problem: B2. Bouquet (Hard Version)
 * URL: https://codeforces.com/contest/1995/problem/B2
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	vector<pair<int,int>> ans;
	for(int i=0;i<n;i++){
		ans.push_back({arr[i],arr1[i]});
	}int fans=0;
	sort(ans.begin(),ans.end());
	for(int i=0;i<n-1;i++){
		for(int j=1;j<=ans[i].second;j++){
			int lo1=0;int hi1=ans[i+1].second;int an=0;
			while(lo1<=hi1){
				int mid1=lo1+(hi1-lo1)/2;
				if(ans[i].first*j+ans[i+1].first*mid1>=m){
					an=mid1;
					hi1=mid1-1;
				}else lo1=mid1+1;
			}
			if(an>0&&ans[i].first*j+ans[i+1].first*an>m) fans=max(fans,ans[i].first*j+ans[i+1].first*(an-1));
			else fans=max(fans,ans[i].first*j+ans[i+1].first*an);
		}
	}
	cout<<fans<<"\n";
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
