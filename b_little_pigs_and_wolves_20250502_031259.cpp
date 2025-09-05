/*
 * Problem: B. Little Pigs and Wolves
 * URL: https://codeforces.com/problemset/problem/116/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void solve() {
    // Your solution here
    int n ,m;cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<m;j++){
			a[i][j]=s[j];
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='W'){
			for(int k=0;k<4;k++){
				int nr=i+dx[k];
				int nc=j+dy[k];
				if(nr>=0&&nr<n&&nc>=0&&nc<m&&a[nr][nc]=='P'){cnt++;a[nr][nc]='.';break;}
			}
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
