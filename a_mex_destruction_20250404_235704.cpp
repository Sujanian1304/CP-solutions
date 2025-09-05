/*
 * Problem: A. MEX Destruction
 * URL: https://codeforces.com/contest/2049/problem/A
 * Time Limit: 1.0 seconds
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
	int first=-1;int last=-1;
	for(int i=0;i<n;i++){
		if(arr[i]!=0) {first=i;break;}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]!=0) {last=i;break;}
	}
	if(first==-1) cout<<"0\n";
	else{
	for(int i=first;i<=last;i++){
		if(arr[i]==0) {cout<<"2\n";return;}
	}
	cout<<"1\n";
	
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
