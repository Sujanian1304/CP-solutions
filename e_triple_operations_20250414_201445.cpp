/*
 * Problem: E. Triple Operations
 * URL: https://codeforces.com/contest/1999/problem/E
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
static const int MAXV = 200000;
vector<int> p(MAXV+1,0);
void solve() {
    int n,m;cin>>n>>m;
    int cnt=0;
    cnt+=p[n]-p[n-1];
    cnt+=p[n+1]-p[n]+cnt;
    cnt+=p[m]-p[n+1];
    cout<<cnt<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> b_3(MAXV+1,0);
    for(int i=1;i<=MAXV;i++){
		int d=0;int x=i;
		while(x>0){
			x/=3;
			d++;
		}
		b_3[i]=d;
	}
	
	for(int i=1;i<=MAXV;i++){
		p[i]=b_3[i]+p[i-1];
	}
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
