/*
 * Problem: C. Delete Two Elements
 * URL: https://codeforces.com/problemset/problem/1598/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long double

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);int sum=0;map<int,int>mp;
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];mp[a[i]]++;}
    int avg=(sum)/n;
    int req=sum-avg*(n-2);
    long long ans=0;
    for(int i=0;i<n;i++){
		int x=req-a[i];
		if(x==a[i]){
			if(mp[x]>1){ans+=(mp[x]*(mp[x]-1)/2);mp[x]=0;}
		}
		else{
			//cout<<x<<" "<<mp[x]<<" "<<a[i]<<mp[a[i]]<<" ";
			if(mp[x]!=0){ans+=(mp[a[i]]*mp[x]);mp[x]=0;mp[a[i]]=0;}
		}
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
