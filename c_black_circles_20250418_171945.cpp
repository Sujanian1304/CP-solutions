/*
 * Problem: C. Black Circles
 * URL: https://codeforces.com/contest/2002/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr[i]={a,b};
	}
	int x,y,a,b;cin>>x>>y>>a>>b;
	int dis=(x-a)*(x-a)+(y-b)*(y-b);
	int m_dis=1e36;
	for(int i=0;i<n;i++){
		int d=(arr[i].first-a)*(arr[i].first-a)+(arr[i].second-b)*(arr[i].second-b);
		//cout<<d<<" ";
	     m_dis=min(m_dis,d);
	}
	//cout<<m_dis<<" "<<dis;
	if(m_dis<=dis){cout<<"NO\n";}
	else cout<<"YES\n";
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
