/*
 * Problem: C - Sensors
 * URL: https://atcoder.jp/contests/abc325/tasks/abc325_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[]={-1,0,1,0,1,1,-1,-1};
int dy[]={0,-1,0,1,1,-1,1,-1};
int n,m;
vector<string> arr;
vector<vector<int>> vis;
void check(int a,int b){
	vis[a][b]=1;
				for(int i=0;i<8;i++){
					int nr=a+dx[i];
					int nc=b+dy[i];
					if(nr>=0&&nr<n&&nc>=0&&nc<m&&arr[nr][nc]=='#') {if(vis[nr][nc]==0) check(nr,nc);}
				}
			}
void solve() {
    // Your solution here
    cin>>n>>m;
    vis.resize(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
		string t;cin>>t;
		arr.push_back(t);
	}int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='#'&&vis[i][j]==0){
				check(i,j);
				cnt++;
				//cout<<i<<j<<" ";
			}
		}
	}
	cout<<cnt<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
