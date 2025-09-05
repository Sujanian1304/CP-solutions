/*
 * Problem: G1. Teleporters (Easy Version)
 * URL: https://codeforces.com/problemset/problem/1791/G1
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];vector<int> prefix(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		arr[i]+=i+1;
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(i!=0) prefix[i]=prefix[i-1]+arr[i];
		else prefix[i]=arr[i];
	}
	sort(prefix.begin(),prefix.end());
	//for(auto&v:prefix) cout<<v<<" ";
	auto x=lower_bound(prefix.begin(),prefix.end(),m);
	int y=x-prefix.begin();
	if(y==0) { if(*x>m) cout<<"0\n";else cout<<"1\n";}
	else {
		if(*x==m) cout<<y+1<<"\n";
		else{
	cout<<y<<"\n";}
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
