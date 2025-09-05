/*
 * Problem: B - Grid Rotation
 * URL: https://atcoder.jp/contests/abc404/tasks/abc404_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<char>> a(n,vector<char>(n)),b(n,vector<char>(n)),c(n,vector<char>(n));
    for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<n;j++){
			a[i][j]=s[j];
		}
	}
	for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<n;j++){
			b[i][j]=s[j];
		}
	}
	int ans = INT_MAX;

int cnt = 0;              
for(int i=0;i<n;i++) for(int j=0;j<n;j++){
    c[i][j] = a[i][j];
    if(c[i][j] != b[i][j]) cnt++;
}

ans = min(ans, cnt);

cnt = 3;                   
for(int i=0;i<n;i++) for(int j=0;j<n;j++){
    c[i][j] = a[j][n-1-i];
    if(c[i][j] != b[i][j]) cnt++;
}

ans = min(ans, cnt);


cnt = 2;                      
for(int i=0;i<n;i++) for(int j=0;j<n;j++){
    c[i][j] = a[n-1-i][n-1-j];
    if(c[i][j] != b[i][j]) cnt++;
}

ans = min(ans, cnt);


cnt = 1;                     
for(int i=0;i<n;i++) for(int j=0;j<n;j++){
    c[i][j] = a[n-1-j][i];
    if(c[i][j] != b[i][j]) cnt++;
}

ans = min(ans, cnt);

cout << ans << "\n";
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
