/*
 * Problem: A. Alice and Books
 * URL: https://codeforces.com/contest/1978/problem/A
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
    int arr[n];int ma=0;int a=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=n-1) {
			if(arr[i]>=ma){
				ma=arr[i];
				a=i;
			}
		}
	}
	cout<<arr[n-1]+arr[a]<<"\n";
	
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
