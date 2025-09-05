/*
 * Problem: F. 3SUM
 * URL: https://codeforces.com/contest/1692/problem/F
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    
int three[22][3]={{0,0,3},{0,1,2},{0,4,9},{0,5,8},{0,6,7},{1,3,9},{1,4,8},{1,5,7},{1,1,1},{1,6,6},{2,2,9},{2,3,8},{2,4,7},{2,5,6},{3,4,6},{3,5,5},{4,4,5},{7,8,8},{3,3,7},{6,8,9},{5,9,9},{7,7,9}};
    int n;cin>>n;
    vector<int> arr(n);map<int,int> mp1;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		arr[i]=a%10;
         mp1[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<22;i++){
		map<int,int> mp=mp1;
		int x=three[i][0];
		auto it=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
		if(it==n) continue;
		if(arr[it]!=x) continue;
		else{
			if(mp[arr[it]]>0) mp[arr[it]]--;
			else continue;
			int y=three[i][1];
			 it=lower_bound(arr.begin(),arr.end(),y)-arr.begin();
			 if(it==n) continue;
		     if(arr[it]!=y) continue;
		     else{
				 if(mp[arr[it]]>0) mp[arr[it]]--;
			     else continue;
			     int z=three[i][2];
			     it=lower_bound(arr.begin(),arr.end(),z)-arr.begin();
			     if(it==n) continue;
		          if(arr[it]!=z||mp[arr[it]]<1) continue;
		          else {cout<<"YES\n";return;}
			  }
		  }
	  }
	  cout<<"NO\n";
			
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
