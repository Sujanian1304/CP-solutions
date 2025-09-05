/*
 * Problem: C. Minimize Distance
 * URL: https://codeforces.com/problemset/problem/1591/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> p,ne;
    for(int i=0;i<n;i++){
	 int a;cin>>a;
	 if(a>=0) p.push_back(a);
	 else ne.push_back(-a);
	}
	sort(p.rbegin(), p.rend());
sort(ne.rbegin(), ne.rend());
int ans=0;
for(int i = 0; i < (int)p.size(); i += m)
    ans += 2LL * p[i];
for(int i = 0; i < (int)ne.size(); i += m)
    ans += 2LL * ne[i];

int farthest = 0;
if (!p.empty())  farthest = max(farthest, p[0]);
if (!ne.empty()) farthest = max(farthest, ne[0]);
ans -= farthest;

	cout<<ans<<"\n";
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
