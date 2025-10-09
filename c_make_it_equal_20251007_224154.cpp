/*
 * Problem: C. Make it Equal
 * URL: https://codeforces.com/contest/2131/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int x=a[i]%k;
		mp[x]++;
	}
	for(int i=0;i<n;i++){
		int y=b[i]%k;
		auto it=mp.find(y);
		if(it!=mp.end()&&mp[y]>0){
			mp[y]--;
			
		}else{
			it=mp.find(k-y);
			if(it!=mp.end()&&mp[k-y]>0){
				mp[k-y]--;
			}
			else{
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
	
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
