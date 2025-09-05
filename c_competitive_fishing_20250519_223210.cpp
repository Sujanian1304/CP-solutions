/*
 * Problem: C. Competitive Fishing
 * URL: https://codeforces.com/contest/2042/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

		
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<int> a(n);vector<int> p(n);
    for(int i=0;i<n;i++) a[i]=((s[i]-48==0)?-1:1);
    p[n-1]=a[n-1];
    for(int i=n-2;i>0;i--){
		p[i]=a[i]+p[i+1];
	}
    sort(p.begin(),p.end(),greater<int>());
    int ans=-1;
    for(int i=0;i<n;i++){
		m-=p[i];
		if(m<=0){ ans=i+2; break;}
	}
	cout<<ans<<"\n";
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
