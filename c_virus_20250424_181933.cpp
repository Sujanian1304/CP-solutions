/*
 * Problem: C. Virus
 * URL: https://codeforces.com/problemset/problem/1704/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	if(m==1){
		cout<<2<<"\n";return;
	}
	sort(arr.begin(),arr.end());vector<int> gaps;
	for(int i=0;i<m-1;i++){
		if(i==0){
			int x=(arr[i]-1)+(n-arr[m-1]);
			gaps.push_back(x);
		}
			int x=arr[i+1]-arr[i]-1;
			gaps.push_back(x);
		
	}
	sort(gaps.begin(),gaps.end());
	int nsave=0;int nsub=0;int x=gaps.size();
	for(int i=x-1;i>=0;i--){//cout<<gaps[i]<<" ";
		gaps[i]-=nsub;
		if(gaps[i]<=0) continue;
		if(gaps[i]==1||gaps[i]==2){
			nsave++;
			nsub+=2;
			continue;
		}
		nsave+=(gaps[i]-1);
		nsub+=4;
	}
	cout<<n-nsave<<"\n";
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
