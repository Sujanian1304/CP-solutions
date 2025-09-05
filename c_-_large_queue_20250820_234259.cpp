/*
 * Problem: C - Large Queue
 * URL: https://atcoder.jp/contests/abc413/tasks/abc413_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    deque<pair<int,int>> b;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		if(a==1){
			int x,y;cin>>x>>y;
			b.push_back({x,y});
		}else{
			int x;cin>>x;
			int sum=0;
			while(x>0){
				if(x<b[0].first){
					sum+=b[0].second*x;
					b[0].first-=x;
					break;
				}else{
				int y=b[0].second*b[0].first;
				sum+=y;
				x-=b[0].first;
				b.pop_front();
			 }
			}
			cout<<sum<<"\n";
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
