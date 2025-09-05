/*
 * Problem: C. Little Alawn's Puzzle
 * URL: https://codeforces.com/problemset/problem/1534/C
 * Time Limit: 2.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int modexp(int a,int e){
    int r = 1;
    while(e){
        if(e&1) r = (r*a)%MOD;
        a = (a*a)%MOD;
        e >>= 1;
    }
    return r;
}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> a(2,vector<int>(n));
    for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
		   cin>>a[i][j];
	   }
	}
		for(int j=0;j<n;j++){
		   if(a[0][j]>a[1][j]){swap(a[0][j],a[1][j]);}
	   }
	int cnt=0;map<pair<int,int>,int>mp;
		for(int j=0;j<n;j++){
		  mp[{a[0][j],a[1][j]}]++;
	   }
	   int x=0;
	   if(mp.size()>n/2) x=n-mp.size()+1;
	   else if(mp.size()==n/2) x=n-mp.size();
	  cout<<modexp(2,x)<<"\n";
	
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
