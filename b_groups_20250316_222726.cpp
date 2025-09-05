/*
 * Problem: B. Groups
 * URL: https://codeforces.com/contest/1598/problem/B
 * Time Limit: 4.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n][5];
    for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
		}
	}
	int cnt=0;
	for(int i=0;i<5;i++){
		int x=0;
		for(int j=0;j<n;j++){
			x+=arr[j][i];
		}
		if(n>2){
		if(x>=n/2){cnt++;
			for(int j=0;j<n;j++){
			if(arr[j][i]==1)
			for(int k=0;k<5;k++){
				arr[j][k]=0;
			}
		}
			}
		}else{
			if(x>=n/2){cnt++;}
		}
	}
	if(cnt>=2) cout<<"yes\n";
	else cout<<"no\n";
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
