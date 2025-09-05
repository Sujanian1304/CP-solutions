/*
 * Problem: C. Paprika and Permutation
 * URL: https://codeforces.com/problemset/problem/1617/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<bool> used(n+1,0);
	map<int,int> mp;int cnt=0;int j=1;
	for(int i=0;i<n;i++){
		if(a[i]<=n&&!used[a[i]]){
			used[a[i]]=1;
		}
		else{
			while(j<n&&used[j]) j++;
			if(j==0||a[i]-j<=a[i]/2){
				//cout<<a[i]<<j;
				cout<<"-1\n";return;
			}
			used[j]=1;
			cnt++;
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
