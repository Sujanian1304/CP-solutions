/*
 * Problem: C. Absolute Zero
 * URL: https://codeforces.com/contest/1991/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);bool e=0;bool o=0;int m=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2) o=1;
		else e=1;
		m=max(m,arr[i]);
	}
	if(m==0) {cout<<"0\n";return;}
	if(o==1&&e==1) {cout<<"-1\n";return;}
	vector<int> ans;
		while(m>1){
			if(m%2){m=(m+1)/2;ans.push_back(m);}
			else {m=m/2;ans.push_back(m);}
		}
		int y=0;
		for(auto&v:ans){
			for(int i=0;i<n;i++){
				arr[i]=abs(arr[i]-v);
			}
		}
		for(auto&v:arr) y=max(y,v);
		if(y!=0)ans.push_back(1);
		cout<<ans.size()<<"\n";
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
