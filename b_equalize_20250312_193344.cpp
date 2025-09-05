/*
 * Problem: B. Equalize
 * URL: https://codeforces.com/contest/1928/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;set<int> st;
    for(int i=0;i<n;i++){
		int x;cin>>x;
		//cin>>arr[i];
		st.insert(x);
	}
	for(auto&v:st) arr.push_back(v);
	int m=arr.size();
	//cout<<m<<" ";
	int tail=0;int head=-1;int ans=0;
	while(tail<m){
		while(head+1<m&&arr[head+1]-arr[tail]<=n-1){
			head++;
		}
		ans=max(ans,(head-tail+1));
		if(head<tail){
			tail++;
			head=tail-1;
		}else
		{
			tail++;
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
