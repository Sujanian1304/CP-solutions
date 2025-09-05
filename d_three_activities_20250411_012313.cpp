/*
 * Problem: D. Three Activities
 * URL: https://codeforces.com/contest/1914/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<pair<int,int>>> arr(3);
    for(int j=0;j<3;j++){
       for(int i=0;i<n;i++){
		   int a;cin>>a;
		   arr[j].push_back({a,i});
	   }
     }
     for(int i=0;i<3;i++){
		 sort(arr[i].begin(),arr[i].end());
		 reverse(arr[i].begin(),arr[i].end());
	 }
	 int fsum=0;
	 for(int i=0;i<3;i++){
		 for(int j=0;j<3;j++){
			 int sum=arr[0][i].first;
			 if(arr[0][i].second!=arr[1][j].second) {sum+=arr[1][j].first;
			 for(int k=0;k<3;k++){
				 if(arr[0][i].second!=arr[2][k].second&&arr[1][j].second!=arr[2][k].second){sum+=arr[2][k].first;break;}
			 }
			 }
			  fsum=max(sum,fsum);
		 }
		 //cout<<"\n";
		 
	 }
		
	cout<<fsum<<"\n";		 
			 
		  
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
