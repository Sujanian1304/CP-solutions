/*
 * Problem: B. Permutations & Primes
 * URL: https://codeforces.com/problemset/problem/1844/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n>2){
    int arr[n];arr[0]=2;arr[n-1]=3;arr[(n+1)/2-1]=1;int j=4;
    for(int i=1;i<n-1;i++){
		if(i!=(n+1)/2-1){arr[i]=j;
		j++;}
	}
	for(auto&v:arr) cout<<v<<" ";
	cout<<"\n";
}else{
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<"\n";
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
