/*
 * Problem: B. Nastia and a Good Array
 * URL: https://codeforces.com/problemset/problem/1521/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    int mi=1e9;int ind=0;
    for(int i=0;i<n;i++){
		cin>>a[i];
		if(mi>a[i]){
			mi=a[i];
			ind=i;
		}
	}
	cout<<n-1<<"\n";
	for(int i=0;i<n;i++){
		if(i==ind) continue;
		cout<<ind+1<<" "<<i+1<<" "<<mi<<" "<<mi+abs(ind-i)<<"\n";
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
