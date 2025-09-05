/*
 * Problem: C - Doubled
 * URL: https://atcoder.jp/contests/abc196/tasks/abc196_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    vector<int> arr(6);vector<int> p(6);
    for(int i=0;i<6;i++){
		arr[i]=9*pow(10,i);
		if(i==0) p[i]=arr[i];
		else p[i]=arr[i]+p[i-1];
	}
    string s;cin>>s;
    int x=s.size();
    if(x%2){
		if(x==1) {cout<<"0\n";return;}
		int y=(x-1)/2-1;
		cout<<p[y];
		return;
	}
	if(x==2) {
		cout<<s[0]-48<<"\n";
		return;
	}
		int ans=p[x/2-2];int cnt=1;
		
		for(int i=0;i<x/2;i++){
			if(i==0)cnt*=min(s[i]-48,s[i+x/2]-48);
			else cnt*=(min(s[i]-48,s[i+x/2]-48)+1);
		}
		ans+=cnt;
		cout<<ans<<"\n";
	
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
