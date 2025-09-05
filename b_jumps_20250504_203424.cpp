/*
 * Problem: B. Jumps
 * URL: https://codeforces.com/problemset/problem/1455/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a;
void solve() {
    // Your solution here
    int n;cin>>n;
		int x=lower_bound(a.begin(),a.end(),n)-a.begin();
		//cout<<a[x];
		if(a[x]==n){cout<<x+1<<"\n";}
		else{
			if(a[x]-n==1)cout<<x+2<<"\n";
			else cout<<x+1<<"\n";
			
		}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<1e6+1;i++){
		a.push_back(i*(i+1)/2);
	}
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
