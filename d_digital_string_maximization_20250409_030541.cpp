/*
 * Problem: D. Digital string maximization
 * URL: https://codeforces.com/contest/2050/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    for(int i=0;i<n;i++){
    int best=s[i]-'0';int ans=i;
    for(int j=i;j<min(i+10,n);j++){
		if(s[j]-'0'-(j-i)>best){
			best=s[j]-'0'-(j-i);
			ans=j;
		}
	}
	while(ans>i){
		swap(s[ans],s[ans-1]);
		ans--;
	}
	s[i]=char(best+'0');
}
cout<<s<<"\n";
			
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
