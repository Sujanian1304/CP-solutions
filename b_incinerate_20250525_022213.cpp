/*
 * Problem: B. Incinerate
 * URL: https://codeforces.com/contest/1763/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;vector<int> a(n),b(n);
    vector<pair<int,int>> c(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		c[i].first=a[i];
		c[i].second=b[i];
	}*
	sort(c.begin(),c.end(),[](const auto &x, const auto &y){
    if (x.second != y.second) return x.second < y.second;    
    else return x.first<y.first;                         
    });
	int d=0;int i=0;
	while(k>0){
		//if(k<=0){cout<<"NO\n";return;}
		d+=k;
		while(d>=c[i].first&&i<n) i++;
		if(i==n){
			cout<<"YES\n";
			return;
		}
		k-=c[i].second;
	}
	cout<<"NO\n";
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
