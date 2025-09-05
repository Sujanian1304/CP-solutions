/*
 * Problem: C - Buy Balls
 * URL: https://atcoder.jp/contests/abc396/tasks/abc396_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    deque<int>arr(n),brr(m);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>brr[i];
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
		int sum=0;
		for(int i=n-1;i>=0;i--){
			if(arr[i]>0) {sum+=arr[i];if(brr.size()>0&&brr.back()>0) {sum+=brr.back();brr.pop_back();}}
			else {
				if(brr.size()>0&&brr.back()>abs(arr[i])&&brr.back()>0) {sum+=arr[i];sum+=brr.back();brr.pop_back();}
				else break;
			}
		}
		cout<<sum;
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
