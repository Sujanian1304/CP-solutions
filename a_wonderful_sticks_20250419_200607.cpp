/*
 * Problem: A. Wonderful Sticks
 * URL: https://codeforces.com/contest/2096/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;int x=1;int y=n;
    string s;cin>>s;vector<int> cnt(n+1,0);deque<int> ans;
    if(n==2){
		if(s[0]=='>') {
			cout<<1<<" "<<2<<"\n";
		}else{
			cout<<2<<" "<<1<<"\n";
		}
	}else{
    for(int i=n-2;i>=0;i--){
		if(s[i]=='<'){ ans.push_front(x);cnt[x]++;x++;}
		else if(s[i]=='>') {ans.push_front(y);cnt[y]++;y--;}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i]==0) {ans.push_front(i);break;}
	}
	for(auto&v:ans) cout<<v<<" ";
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
