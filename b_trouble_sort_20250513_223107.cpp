/*
 * Problem: B. Trouble Sort
 * URL: https://codeforces.com/problemset/problem/1365/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}int one=0;int zero=0;
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==0) zero++;
		else one++;
	}
	vector<int> c(a.begin(),a.end());
	sort(c.begin(),c.end());
	if(a==c){
		cout<<"Yes\n";
	}else{
		if(one>0&&zero>0){cout<<"Yes\n";}
		else{
			cout<<"No\n";
		}
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
