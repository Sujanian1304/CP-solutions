/*
 * Problem: B. XOR Sequences
 * URL: https://codeforces.com/contest/1979/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    bitset<30> a(n);bitset<30> b(m);
    //a=n;b=m;
    int cnt=0;
    for(int i=0;i<30;i++){
		//cout<<a[i]<<" "<<b[i]<<" ";
		if(a[i]==b[i])cnt++;
		else break;
	}
	//cout<<a<<" "<<b<<"\n";
	cout<<(1<<cnt)<<"\n";
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
