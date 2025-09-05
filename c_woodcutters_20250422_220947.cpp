/*
 * Problem: C. Woodcutters
 * URL: https://codeforces.com/problemset/problem/545/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> x(n);vector<int> y(n);
    for(int i=0;i<n;i++){
		cin>>x[i];cin>>y[i];
	}
	
	int cnt=1;
	if(n==1) {cout<<1<<"\n";return;}
	if(n==2){cout<<2<<"\n";return;}
	bool flag=0;
	if(x[1]-y[1]>x[0]) {cnt++;flag=0;}
	else if(x[1]+y[1]<x[2]){cnt++;flag=1;}
	for(int i=2;i<n-1;i++){
		if(flag==0){
			int z=x[i]-y[i];int s=x[i]+y[i];
			if(z>x[i-1]){cnt++;}
			else if(s<x[i+1]){cnt++;flag=1;}
		}
		else{
			int z=x[i]-y[i];int s=x[i]+y[i];
			if(z>x[i-1]+y[i-1]){cnt++;flag=0;}
			else if(s<x[i+1]){cnt++;}
			else flag=0;
		}
	}cnt++;
	cout<<cnt<<"\n";
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
     //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
