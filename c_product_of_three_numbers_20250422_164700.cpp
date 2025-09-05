/*
 * Problem: C. Product of Three Numbers
 * URL: https://codeforces.com/problemset/problem/1294/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int a=0;bool flag=0;
    for(int i=2;i*i<=n;i++){
		if(n%i==0) {a=i;flag=1;break;}
	}
	if(!flag){cout<<"NO\n";return;}
	int b=n/a;int c=0;
	for(int i=2;i*i<=b;i++){
		if(b%i==0&&i!=a){c=i;flag=0;break;}
	}
	if(flag){cout<<"NO\n";return;}
	int d=b/c;
	if(d==c){cout<<"NO\n";return;}
	cout<<"YES\n";
	cout<<a<<" "<<d<<" "<<c<<"\n";;
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
