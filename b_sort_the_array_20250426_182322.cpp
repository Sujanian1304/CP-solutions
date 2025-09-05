/*
 * Problem: B. Sort the Array
 * URL: https://codeforces.com/problemset/problem/451/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0;int r=0;bool flag=1;int cnt=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			if(flag) cnt++;
			if(cnt>1){cout<<"no\n";return;}
			if(flag) {l=i;flag=0;}
			r=i+1;
		}
		else if(i>0&&arr[i]<arr[i+1]&&arr[i]<arr[i-1]){
			cnt++;
		}
	}
	if(((r+1<n&&arr[l]<arr[r+1])||r+1==n)&&((l>0&&arr[l-1]<arr[r])||l==0)){
	cout<<"yes\n";
	cout<<l+1<<" "<<r+1<<"\n";
    }
    else cout<<"no\n";
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
