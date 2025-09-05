/*
 * Problem: C. Sequence Transformation
 * URL: https://codeforces.com/problemset/problem/1454/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]].push_back(i);
	}
	if(mp.size()==a.size()){
		if(a.size()==1)cout<<0<<"\n";
		else cout<<1<<"\n";
		return;}
	int ans=1e9;
	for(auto&v:mp){
        int last=-1;int cnt=0;
		for(auto&a:v.second){
			//cout<<a<<" ";
			if(last==-1){
				if(a!=0) cnt++;
			}
			if(last!=-1&&a-last>1){
				if(a!=0) cnt++;
			}
			last=a;
			//if(a==0)last=1;
		}
		if(last!=n-1) cnt++;
		ans=min(cnt,ans);
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
