/*
 * Problem: B. Permutation Printing
 * URL: https://codeforces.com/problemset/problem/1930/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    deque<int> arr,arr1;
    for(int i=1;i<=n;i++){
		if(i%2) arr.push_back(i);
		else arr1.push_back(i);
	}
	//reverse(arr.begin(),arr.end());
	for(int i=1;i<=n;i++){
		if(i%2) {int x=arr.back();cout<<x<<" ";arr.pop_back();}
		else {int x=arr1.front();cout<<x<<" ";arr1.pop_front();}
	}
	cout<<"\n";
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
