/*
 * Problem: C - Pigeonhole Query
 * URL: https://atcoder.jp/contests/abc391/tasks/abc391_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){ a[i]=i;b[i]=1;}
    int cnt=0;
    for(int i=0;i<m;i++){
		int x;cin>>x;
		if(x==2){
			cout<<cnt<<"\n";
		}else{
			int y,z;cin>>y>>z;
			if(b[a[y-1]]==2) cnt-=1;
			b[a[y-1]]-=1;
			a[y-1]=z-1;
			if(b[a[y-1]]==1) cnt+=1;
			b[a[y-1]]+=1;
		}
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
