/*
 * Problem: E. Mirror Grid
 * URL: https://codeforces.com/contest/1703/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<n;j++){
			arr[i][j]=s[j]-48;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//if(i==j) continue;
			//cout<<i<<j<<" "<<j<<n-1-i<<" "<<n-1-i<<n-1-j<<" "<<n-1-j<<i<<"\n";
			int cnt0=0;int cnt1=0;
			if(arr[i][j]==0) cnt0++;else cnt1++;
			if(arr[j][n-1-i]==0) cnt0++;else cnt1++;
			if(arr[n-1-i][n-1-j]==0) cnt0++;else cnt1++;
			if(arr[n-1-j][i]==0) cnt0++;else cnt1++;
			if(cnt0==4||cnt1==4) continue;
			if(cnt0>=cnt1){
				arr[i][j]=0;arr[j][n-1-i]=0;arr[n-1-i][n-1-j]=0;arr[n-1-j][i]=0;
				cnt+=cnt1;
			}
			else{
				arr[i][j]=1;arr[j][n-1-i]=1;arr[n-1-i][n-1-j]=1;arr[n-1-j][i]=1;
				cnt+=cnt0;
			}
		}
	}
	cout<<cnt<<"\n";
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
