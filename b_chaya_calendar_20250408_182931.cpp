/*
 * Problem: B. Chaya Calendar
 * URL: https://codeforces.com/contest/1932/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=arr[0];
	for(int i=1;i<n;i++){
		if(sum>arr[i]){
			int x=(sum/arr[i]+1)*arr[i];
			sum=x;}
			else if(sum==arr[i]){
				sum=arr[i]*2;
			}else{
				sum=arr[i];
			}
		}
		cout<<sum<<"\n";
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
