/*
 * Problem: C. Rudolf and the Another Competition
 * URL: https://codeforces.com/contest/1846/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,h;cin>>n>>m>>h;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
		sort(arr[i].begin(),arr[i].end());
	}
	int points=1;int pen=arr[0][0];int p=arr[0][0];
	if(p>h){points--;pen-=p;}
	else{
	for(int i=1;i<m;i++){
		p+=arr[0][i];
		pen+=p;
		if(p>h) {pen-=p;break;}
		points++;
	}
	}int cnt=1;
	for(int i=1;i<n;i++){
		int points1=1;int pen1=arr[i][0];int p1=arr[i][0];
		if(p1>h){points1--;pen1-=p1;}
	    else{
		for(int j=1;j<m;j++){
			p1+=arr[i][j];
		    pen1+=p1;
		   if(p1>h) {pen1-=p1;break;}
		    points1++;
	      }
	  }
	     // cout<<pen1<<" ";
	      if(points1>points){cnt++;}
	      if(points1==points&&pen1<pen) cnt++;
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
