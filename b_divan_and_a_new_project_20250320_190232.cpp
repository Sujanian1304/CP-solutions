/*
 * Problem: B. Divan and a New Project
 * URL: https://codeforces.com/problemset/problem/1614/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];set<pair<int,int>> st;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		st.insert({arr[i],i});
	}
	int ans[n+1];ans[0]=0;
	auto it=st.rbegin();int j=1;int i=1;
	while(it!=st.rend()){
		//cout<<it->first<<it->second<<j<<" ";
		if(i%2)ans[it->second+1]=j;
		else ans[it->second+1]=-j;
		//if(it->second<n-1) ans[it->second+2]=-j;
		if(i%2==0) j++;
		it++;i++;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=abs(ans[i]-ans[0])*arr[i-1]*2;
	}
	cout<<sum<<"\n";
	for(auto&v:ans) cout<<v<<" ";
	cout<<"\n";
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
