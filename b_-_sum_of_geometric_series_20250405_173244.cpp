/*
 * Problem: B - Sum of Geometric Series
 * URL: https://atcoder.jp/contests/abc400/tasks/abc400_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
	if(b==0) return 1;
	if(b%2) return a*binpow(a,b-1);
	else {
		int x=binpow(a,b/2);
		return x*x;
	}
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int sum=0;
    for(int i=0;i<=m;i++){
		int x=binpow(n,i);
		//cout<<x<<" ";
		if(x>1e9) {cout<<"inf\n";return;}
		sum+=x;
		if(sum>1e9) {cout<<"inf\n";return;}
	}
	cout<<sum<<"\n";
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
