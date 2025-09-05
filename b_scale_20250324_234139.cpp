/*
 * Problem: B. Scale
 * URL: https://codeforces.com/contest/1996/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<string> s;
    for(int i=0;i<n;i++){
		string t;cin>>t;
		s.push_back(t);
	}
    int arr[n][n];
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=s[i][j]-48;
		}
	}
	int x=n/m;
    int ans[x][x];int y=0;int z=0;
     for(int i=0;i<n;i+=m){
		 //if(i>n-1) break;
		for(int j=0;j<n;j+=m){
			//if(j>n-1) break;
			//cout<<y<<z<<" "<<arr[i][j]<<" ";
			ans[y][z]=arr[i][j];
			z++;
		}
		z=0;
		y++;
	}
	for(auto&v:ans){
		for(auto&a:v){
			cout<<a;
		}
		cout<<"\n";
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
