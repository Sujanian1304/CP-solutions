/*
 * Problem: D. Rudolph and Christmas Tree
 * URL: https://codeforces.com/contest/1846/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long double

void solve() {
    // Your solution here
    int n,d,h;cin>>n>>d>>h;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	double sum=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]>=h){
			sum+=d*h/2;
		}
		else{
			double h1=arr[i+1]-arr[i];
			double k=(h-h1)/h;
			double b1=d*k;
			sum+=((b1+d)*h1)/2;
		}
	}
	sum+=(d*h)/2;
	cout<<setprecision(8)<<sum<<"\n";
	
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
