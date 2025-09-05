/*
 * Problem: B. Anton and currency you all know
 * URL: https://codeforces.com/problemset/problem/508/B
 * Time Limit: 0.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;
    cin>>s;int n=s.size();int ans=-1;
    for(int i=0;i<n;i++){
		if((s[i]-48)%2==0){
			if(s[i]<=s[n-1]){swap(s[i],s[n-1]);break;}
			else ans=i; }
		
	}
	if((s[n-1]-48)%2){
		if(ans==-1)cout<<"-1\n";
		else {swap(s[ans],s[n-1]);cout<<s<<"\n";}}
	else cout<<s<<"\n";
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
