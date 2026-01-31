/*
 * Problem: B - Setsubun
 * URL: https://atcoder.jp/contests/abc443/tasks/abc443_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x,int a,int b){
	int sum=(x+1)*(2*a+x)/2;
	if(sum>=b) return 1;
	else return 0;
}
void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    int lo=0;int hi=1e9;
    while(lo<hi){
		int mid=(lo+hi)/2;
		if(check(mid,a,b)){
			hi=mid;
		}else{
			lo=mid+1;
		}
	}
	cout<<lo<<"\n";
	
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
