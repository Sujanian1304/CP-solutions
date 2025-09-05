/*
 * Problem: B. Chess Tournament
 * URL: https://codeforces.com/contest/1569/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;int cnt=0;
    for(int i=0;i<n;i++){
		if((s[i]-48)==2) cnt++;
	}
	if(cnt>2||cnt==0){
		cout<<"yes\n";
		char arr[n][n];
		vector<vector<int>> vis(n,vector<int>(n,0));
		for(int i=0;i<n;i++){
			if((s[i]-48)==2){
				bool flag=0;
				for(int j=0;j<n;j++){
					if(vis[i][j]==0){
					if(j==i) {arr[i][j]='X';vis[i][j]=1;}
					else if(s[j]-48==1) {arr[i][j]='-';vis[i][j]=1;arr[j][i]='+';vis[j][i]=1;}
					else {
						if(flag) {arr[i][j]='-';vis[i][j]=1;arr[j][i]='+';vis[j][i]=1;}
						else{
						arr[i][j]='+';arr[j][i]='-';vis[i][j]=1;vis[j][i]=1; flag=1;}
					}
				}else continue;
				}
			}else{
				for(int j=0;j<n;j++){
					if(vis[i][j]==0){
					if(j==i) {arr[i][j]='X';vis[i][j]=1;}
					else if(s[j]-48==1) {arr[i][j]='=';vis[i][j]=1;arr[j][i]='=';vis[j][i]=1;}
					else {
						arr[i][j]='+';arr[j][i]='-';vis[i][j]=1;vis[j][i]=1; }
				}else continue;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	else{
		cout<<"no\n";
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
