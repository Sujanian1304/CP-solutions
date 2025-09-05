/*
 * Problem: D. Districts Connection
 * URL: https://codeforces.com/problemset/problem/1433/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);set<int>st;
    for(int i=0;i<n;i++){cin>>a[i];st.insert(a[i]);}
    if(st.size()==1){cout<<"NO\n";return;}
    vector<int> b;int c=0;cout<<"YES\n";
    for(int i=1;i<n;i++){
		if(a[i]!=a[0]){c=i;cout<<1<<" "<<i+1<<"\n";}
		else{b.push_back(i);}
	}
	for(auto &v:b){
		cout<<c+1<<" "<<v+1<<"\n";
	}
	
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
