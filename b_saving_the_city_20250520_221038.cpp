/*
 * Problem: B. Saving the City
 * URL: https://codeforces.com/problemset/problem/1443/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int c,b;cin>>c>>b;
    string s;cin>>s;int n=s.size();
    vector<pair<int,int>> a;
    for(int i=0;i<(int)s.size();i++){
		if(s[i]=='1') {
			int x=i;
			while(i<n&&s[i]=='1'){
				i++;
			}
			if(i<n)a.push_back({x,i-1});
			else a.push_back({x,x});
		}
	}int cnt=0;
	if(a.size()>0){
	 cnt=c;
	for(int i=0;i<(int)a.size()-1;i++){
		if((a[i+1].first-a[i].second-1)*b<c){cnt+=(a[i+1].first-a[i].second-1)*b;}
		else cnt+=c;
	}
 } 
	cout<<cnt<<"\n";
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
