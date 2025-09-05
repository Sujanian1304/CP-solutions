/*
 * Problem: A. Alyona and a Square Jigsaw Puzzle
 * URL: https://codeforces.com/contest/2047/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0) p[i]=arr[i];
		else p[i]=p[i-1]+arr[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		int c=p[i];
		int x=sqrt(p[i]);
       
		if(x*x==p[i]&&x%2) {cnt++;}
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
