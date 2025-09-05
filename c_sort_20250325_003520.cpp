/*
 * Problem: C. Sort
 * URL: https://codeforces.com/contest/1996/problem/C
 * Time Limit: 5.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    vector<vector<int>> arr(n,vector<int>(26));vector<int> cnt(26,0);
    for(int i=0;i<n;i++){
		cnt[s[i]-'a']++;
		for(int j=0;j<26;j++){
		arr[i][j]=cnt[j];
	}
	}
	vector<vector<int>> arr1(n,vector<int>(26));vector<int> cnt1(26,0);
    for(int i=0;i<n;i++){
		cnt1[t[i]-'a']++;
		for(int j=0;j<26;j++){
		arr1[i][j]=cnt1[j];
	}
	}
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		if(a==1){
			int ans=0;
			for(int i=0;i<26;i++){
				//cout<<arr[b-1][i]<<" "<<arr1[b-1][i]<<"   ";
				if(arr[b-1][i]>arr1[b-1][i])ans+=abs(arr[b-1][i]-arr1[b-1][i]);
			}
			cout<<ans<<"\n";
		}
		else{
			int ans=0;
			for(int i=0;i<26;i++){
				//cout<<(arr[b-1][i]-arr[a-2][i])<<" "<<(arr1[b-1][i]-arr1[a-2][i])<<"   ";
				if((arr[b-1][i]-arr[a-2][i])>(arr1[b-1][i]-arr1[a-2][i])) ans+=abs((arr[b-1][i]-arr[a-2][i])-(arr1[b-1][i]-arr1[a-2][i]));
			}
			cout<<ans<<"\n";
		}
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
