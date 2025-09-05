/*
 * Problem: Find Outside Array
 * URL: https://www.codechef.com/START181D/problems/FINDOUT
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);map<int,int> mp;int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		sum+=arr[i];
	}
	//for(auto&v:mp) cout<<v.first<<" ";
	int ans=0;
	for(auto&v:mp){
		int x=2*v.first;
		auto it= mp.find(x);
		if(it==mp.end()){
			ans=v.first;
			break;
		}
	}
	if(ans==0&&sum==0) cout<<"-1\n";
	else cout<<ans<<" "<<ans<<"\n";
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
