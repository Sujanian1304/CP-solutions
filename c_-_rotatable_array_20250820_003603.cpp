/*
 * Problem: C - Rotatable Array
 * URL: https://atcoder.jp/contests/abc410/tasks/abc410_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,q;cin>>n>>q;
    vector<int> aa(n);
    for(int i=0;i<n;i++){
		aa[i]=i+1;
	}
	int shift=0;
    for(int i=0;i<q;i++){
		int a;cin>>a;
		if(a==1){
			int b,c;cin>>b>>c;
			b--;
			aa[(b+shift)%n]=c;
		}
		else if(a==2){
			int b;cin>>b;
			b--;
			cout<<aa[(b+shift)%n]<<"\n";
		}
		else{
			int b;cin>>b;
			shift=(shift+b)%n;
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
