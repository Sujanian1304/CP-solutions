/*
 * Problem: B. Line Segments
 * URL: https://codeforces.com/contest/2119/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int a,b,c,d;cin>>a>>b>>c>>d;
	int m=0;int sum=0;
    vector<int> aa(n);
    for(int i=0;i<n;i++){
		cin>>aa[i];
		m=max(aa[i],m);
		sum+=aa[i];
	}
	double x=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	if(n==1){
		if(x==aa[0]) cout<<"YES\n";
		else cout<<"NO\n";
	}else{
	if(x>=m){
		if(x<=sum){cout<<"YES\n";}
		else cout<<"NO\n";
	}
	else{
		sum-=m;
		sum+=x;
		if(m<=sum) cout<<"YES\n";
		else cout<<"NO\n";
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
