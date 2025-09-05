/*
 * Problem: B. George and Round
 * URL: https://codeforces.com/problemset/problem/387/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);map<int,int> mp;int cnt=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int j=0;j<m;j++){cin>>b[j];mp[b[j]]++;}sort(b.begin(),b.end());
    for(int i=0;i<n;i++){if(mp[a[i]]==0){
		auto it=lower_bound(b.begin(),b.end(),a[i])-b.begin();
		if(it==m)cnt++;
		else{
			if(mp[b[it]]<=0){
				bool flag=0;
				for(int j=it+1;j<m;j++){if(mp[b[j]]>=1) {mp[b[j]]--;flag=1;break;}}
				if(!flag)cnt++;
			}
			else mp[b[it]]--;
			}
			}
			else mp[a[i]]--;}
    cout<<cnt<<"\n";
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
