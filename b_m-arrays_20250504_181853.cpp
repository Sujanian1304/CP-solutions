/*
 * Problem: B. M-arrays
 * URL: https://codeforces.com/problemset/problem/1497/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){a[i]=a[i]%m;}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){mp[a[i]]++;}
	int cnt=0;
	//for(auto&v:mp) cout<<v.first<<" "<<v.second<<" ";
	for(auto&v:mp){
		//cout<<cnt<<" "<<v.first<<" "<<v.second;
		if(v.first==0){cnt++;}
		else{
			if(v.second==0){continue;}
			int x=m-v.first;
			auto it=mp.find(x);
			if(it!=mp.end()){
				int y=min(v.second,mp[x]);
				//cout<<v.first<<x;
				cnt+=(1+((v.second==y)?v.second-y:v.second-y-1)+((mp[x]==y)?mp[x]-y:mp[x]-y-1));
				mp[x]=0;v.second=0;
			}
			else cnt+=v.second;
			
		}
	}
		cout<<cnt<<"\n";
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
