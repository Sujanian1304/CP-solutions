/*
 * Problem: B. Take Your Places!
 * URL: https://codeforces.com/problemset/problem/1556/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);int o=0;int e=0;
    for(int i=0;i<n;i++){cin>>a[i];if(a[i]&1) o++;else e++;}
    if(abs(o-e)>1){cout<<"-1\n";return;}
    vector<int> c,d;int ans1=0;int ans2=0;
		for(int i=0;i<n;i+=2){
			if(a[i]%2==0) c.push_back(i);
		}
		for(int i=1;i<n;i+=2){
			if(a[i]%2) d.push_back(i);
		}
		for(int i=0;i<min((int)d.size(),(int)c.size());i++){
			ans1+=abs(c[i]-d[i]);
		}
		if(d.size()!=c.size()) ans1=-1;
		c.clear();d.clear();
		for(int i=0;i<n;i+=2){
			if(a[i]%2) c.push_back(i);
		}
		for(int i=1;i<n;i+=2){
			if(a[i]%2==0) d.push_back(i);
		}
		for(int i=0;i<min((int)d.size(),(int)c.size());i++){
			ans2+=abs(c[i]-d[i]);
		}
			if(d.size()!=c.size()) ans2=-1;
			if(ans1==-1) cout<<ans2<<"\n";
			else if(ans2==-1) cout<<ans1<<"\n";
		 else cout<<min(ans1,ans2)<<"\n";
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
 
