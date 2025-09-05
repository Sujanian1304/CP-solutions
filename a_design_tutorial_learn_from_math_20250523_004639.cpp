/*
 * Problem: A. Design Tutorial: Learn from Math
 * URL: https://codeforces.com/problemset/problem/472/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<bool> p(1000100,1);
void pre(){
	p[0]=p[1]=0;
	for(int i=2;i<1000100;i++){
		if(p[i]==1){
			for(int j=2*i;j<1000100;j+=i){
				p[j]=0;
			}
		}
	}
}
void solve() {
    // Your solution here
    int n;cin>>n;
    for(int i=2;i<1000100;i++){
		if(p[i]==0){
			int x=n-i;
			if(p[x]==0){cout<<i<<" "<<x<<"\n";return;}
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    pre();
    while (t--) {
        solve();
    }
    
    return 0;
}
