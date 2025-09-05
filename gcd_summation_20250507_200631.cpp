/*
 * Problem: GCD Summation
 * URL: https://www.codechef.com/START185C/problems/ADJG
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(n==1){
		if(m==0){
			cout<<1<<"\n";
		}else{
			cout<<"-1\n";
		}
		return;
	}
    if(n-1>m){cout<<"-1\n";return;}
    int x=m-(n-2);
    vector<int> a(n);
    a[0]=x;
    a[1]=2*x;
    for(int i=2;i<n;i++){
		a[i]=2*x+(i-1);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
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
