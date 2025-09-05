/*
 * Problem: A. Odd Selection
 * URL: https://codeforces.com/problemset/problem/1363/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> o,e;
    for(int i=0;i<n;i++){int a;cin>>a;
		if(a%2) o.push_back(a);
		else e.push_back(a);
		}
    if(m<o.size()){
		if(m%2){cout<<"Yes\n";}
		else{
			if(e.size()==0){cout<<"No\n";}
			else{
				cout<<"Yes\n";
			}
		}
	}
	else{
		if(o.size()%2){cout<<"Yes\n";}
		else{
			if(o.size()==0){cout<<"No\n";return;}
			int x=m-(o.size()-1);
			if(e.size()>=x) cout<<"Yes\n";
			else cout<<"No\n";
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
