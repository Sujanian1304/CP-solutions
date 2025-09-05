/*
 * Problem: C - Bingo 2
 * URL: https://atcoder.jp/contests/abc355/tasks/abc355_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=n*(i)+(j+1);
		}
	}
	vector<int> arr1(2*n+2,0);
	vector<int> ans(m);
	for(int i=0;i<m;i++){ cin>>ans[i];}
	for(int i=0;i<m;i++){
		int lo=0;int hi=n-1;int s=0;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if((n*mid+n)>=ans[i]){
				s=mid;
				hi=mid-1;
			}
			else{
				lo=mid+1;
			}
		}
		int y=lower_bound(arr[s].begin(),arr[s].end(),ans[i])-arr[s].begin();
		arr1[s]++;
		arr1[y+n]++;
		if(s==y){
			arr1[2*n]++;
		}
		if(s+y==n-1){
			arr1[2*n+1]++;
		}
		if(arr1[s]==n||arr1[y+n]==n||arr1[2*n]==n||arr1[2*n+1]==n) {cout<<i+1;return;}
	}
		cout<<"-1\n";
			
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
