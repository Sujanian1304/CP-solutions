/*
 * Problem: B. Absent Remainder
 * URL: https://codeforces.com/contest/1613/problem/B
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
	sort(arr,arr+n);
	int x=n/2;int i=1;
	while(x--){
		cout<<arr[i]<<" "<<arr[0]<<"\n";
		i++;
	}
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
