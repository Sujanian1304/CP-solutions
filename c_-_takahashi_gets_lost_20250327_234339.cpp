/*
 * Problem: C - Takahashi Gets Lost
 * URL: https://atcoder.jp/contests/abc341/tasks/abc341_c
 * Time Limit: 3.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
 int n,m,t;
string s;
vector<string> arr;
bool check(int x,int y){
	for(int i=0;i<t;i++){
		if(s[i]=='L'){
			y=y-1;
		}
		else if(s[i]=='R'){
			y=y+1;
		}
		else if(s[i]=='D'){
			x=x+1;
		}
		else if(s[i]=='U'){
			x=x-1;
		}
		if(arr[x][y]=='#') return 0;
	}
	//cout<<x<<y<<" ";
	return 1;
}
void solve() {
    // Your solution here
      cin>>n>>m>>t;
        cin>>s;
    for(int i=0;i<n;i++){
		string t;cin>>t;
		arr.push_back(t);
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='.'){
				if(check(i,j)){cnt++;
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
