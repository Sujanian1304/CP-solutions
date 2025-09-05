/*
 * Problem: C - Black Intervals
 * URL: https://atcoder.jp/contests/abc411/tasks/abc411_c
 * Time Limit: 3.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(m),box(n+2);
    vector<pair<int,int>> b;
    int cnt=0;
    for(int i=0;i<m;i++){
		cin>>a[i];
		if(box[a[i]]==0){
			box[a[i]]=1;
		}else{
			box[a[i]]=0;
		}
		if(box[a[i]]!=box[a[i]-1]&&box[a[i]]!=box[a[i]+1]){
			cnt+=2;
		}else if(box[a[i]]==box[a[i]-1]&&box[a[i]]==box[a[i]+1]){
			cnt-=2;
		}
		cout<<cnt/2<<"\n";
	}
		
	
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
