/*
 * Problem: C - Dango
 * URL: https://atcoder.jp/contests/abc299/tasks/abc299_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    int tail=0;int head=-1;int ans=0;
    while(tail<n){
		while(head+1<n&&s[head+1]=='o'){
			head++;
		}
if((head+1<n&&s[head+1]=='-')||(tail-1>=0&&s[tail-1]=='-'))ans=max(ans,head-tail+1);
		if(tail>head){
			tail++;
			head=tail-1;
		}else{
			tail++;
		}
	}
	if(ans==0) cout<<"-1\n";
	else cout<<ans<<"\n";
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
