/*
 * Problem: C. Deep Down Below
 * URL: https://codeforces.com/problemset/problem/1561/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> p;
    while(n--){
		int a;cin>>a;int an=0;
		for(int i=0;i<a;i++){
			int b;cin>>b;
			b-=(i-1);
			an=max(an,b);
		}
		p.push_back({an,an+a});
	}
	int x=p.size();
	sort(p.begin(),p.end());int s=p[0].first;int g=p[0].second;
	for(int i=0;i<x-1;i++){
		if(g>=p[i+1].first){ g+=(p[i+1].second-p[i+1].first);}
		else {s+=p[i+1].first-g;g=p[i+1].second;}
	}
	cout<<s<<"\n";
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
