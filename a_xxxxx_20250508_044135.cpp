/*
 * Problem: A. XXXXX
 * URL: https://codeforces.com/problemset/problem/1364/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);int sum=0;
    for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%m){cout<<n<<"\n";}
	else{
		int i=0;int y=n-1;int t=0;
		while(i<=y){
			if(t==0){if(a[i]%m!=0){cout<<max(i-0,n-1-i)<<"\n";return;}else i++;t=1;}
			if(t==1){if(a[y]%m!=0){cout<<max(y-0,n-1-y)<<"\n";return;}else y--;t=0;}
		}
		cout<<"-1\n";
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
