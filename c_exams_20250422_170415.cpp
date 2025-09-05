/*
 * Problem: C. Exams
 * URL: https://codeforces.com/problemset/problem/479/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
   
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    vector<pair<int,int>> a;
    for(int i=0;i<t;i++){
        int n,m;cin>>n>>m;
        a.push_back({n,m});
    }
    sort(a.begin(),a.end());
    int ans=a[0].second;
    for(int i=1;i<t;i++){
		if(a[i].second<ans) ans=a[i].first;
		else ans=a[i].second;
	}
	cout<<ans;
    
    return 0;
}
