/*
 * Problem: E. Negatives and Positives
 * URL: https://codeforces.com/problemset/problem/1791/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int cnt=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<0) {cnt++;
		arr[i]=-arr[i];}
	}
	if(cnt%2){
	sort(arr.begin(),arr.end());
	int x=arr[0];
	int y=accumulate(arr.begin()+1,arr.end(),0LL);
	cout<<y-x<<"\n";
}
else{
	int y=accumulate(arr.begin(),arr.end(),0LL);
	cout<<y<<"\n";
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
