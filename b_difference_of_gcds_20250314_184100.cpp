/*
 * Problem: B. Difference of GCDs
 * URL: https://codeforces.com/contest/1708/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c;
    cin>>a>>b>>c;int arr[a+1];bool flag=1;
    for(int i=1;i<=a;i++){
		if((((b-1)/i+1)*i)<=c) arr[i]=(((b-1)/i+1)*i);
		else {flag=0;break;}
	}
	if(flag) {cout<<"YES\n"; for(int i=1;i<=a;i++) cout<<arr[i]<<" ";cout<<"\n";}
	else cout<<"NO\n";
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
