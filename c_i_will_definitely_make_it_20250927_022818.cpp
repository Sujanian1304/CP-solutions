/*
 * Problem: C. I Will Definitely Make It
 * URL: https://codeforces.com/contest/2126/problem/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int el=a[k-1];int x=0;
	sort(a.begin(),a.end());
	auto l_unique=unique(a.begin(),a.end());
	a.erase(l_unique,a.end());
	n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]==el){ x=i;break;}
	}
	int time=0;
	for(int i=x;i<n-1;i++){
		if(a[i+1]-a[i]+time<=a[i]){
			time+=a[i+1]-a[i];
		}
		else{
			//cout<<a[i];
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
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
