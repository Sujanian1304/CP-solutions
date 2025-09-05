/*
 * Problem: C. Flower City Fence
 * URL: https://codeforces.com/contest/1862/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> brr;map<int,int> freq;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		freq[arr[i]]++;
		if(freq[arr[i]]==1) brr.push_back(arr[i]);
	}
    if(n==1){
		if(arr[0]==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	else{
	vector<int> p((int)brr.size());
	for(int i=0;i<(int)brr.size();i++){
		if(i==0)p[i]=freq[brr[i]];
		else p[i]=p[i-1]+freq[brr[i]];
	}
	map<int,int>mp1;
	for(int i=0;i<(int)brr.size();i++){
		int x=0;
		if(i!=(int)brr.size()-1)x=brr[i]-brr[i+1];
		else x=brr[i];
		int h=p[i];
		mp1[h]=x;
	}
	if(freq==mp1) cout<<"YES\n";
	else cout<<"NO\n";
}		
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
