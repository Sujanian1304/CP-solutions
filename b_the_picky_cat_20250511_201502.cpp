/*
 * Problem: B. The Picky Cat
 * URL: https://codeforces.com/contest/2102/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> b(a.begin(),a.end());
	sort(b.begin(),b.end());
	int x=0;
	if(n%2)x=n/2;
	else x=n/2-1;
	if(b[x]==a[0]){cout<<"YES\n";return;}
	int ans=0;
	for(int i=0;i<n;i++){
		if(b[i]==a[0]){ans=i;break;}
	}
	if(ans>x){
		if(x>0){
		if(b[x-1]>(-a[0])){cout<<"NO\n";return;}
		if((-a[0])>=b[x-1]&&(-a[0])<=b[x]){cout<<"YES\n";return;}
	}else{
		if(-a[0]<=b[x]){cout<<"YES\n";}
		else cout<<"NO\n";
	}
	}
	if(ans<x){
		if(a[0]>=0){
			for(int i=ans+1;i<=x;i++){if((-b[i])>b[ans]){cout<<"NO\n";return;}}
			cout<<"YES\n";return;
		}
		else{
			for(int i=ans+1;i<=x;i++){if(b[i]>=0&&(-b[i])>b[ans]){cout<<"NO\n";return;}}
			cout<<"YES\n";return;
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
