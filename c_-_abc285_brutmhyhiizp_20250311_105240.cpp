/*
 * Problem: C - abc285_brutmhyhiizp
 * URL: https://atcoder.jp/contests/abc285/tasks/abc285_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
	if(b==0) return 1;
	if(b%2) return a*binpow(a,b-1);
	else{
		int ans=binpow(a,b/2);
		return ans*ans;
	}
}
void solve() {
    // Your solution here
    string s;
    cin>>s;
    int ans=0;int n=s.size();
    for(int i=0;i<n;i++){
		ans+=binpow(26,n-i-1)*(s[i]-'A'+1);
	}
	cout<<ans<<"\n";
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
