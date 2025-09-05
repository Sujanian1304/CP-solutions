/*
 * Problem: A. k-Factorization
 * URL: https://codeforces.com/problemset/problem/797/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a;
    while(n%2==0){
		a.push_back(2);
		n/=2;
	}
	for(int i=3;i<n;i+=2){
			while(n%i==0){
				a.push_back(i);
				n/=i;
			}
		}
	if(n>1){a.push_back(n);}
	if(a.size()<m){cout<<"-1\n";return;}
	for(int i=0;i<m-1;i++){
		cout<<a[i]<<" ";
	}
	int x=1;
	for(int i=m-1;i<(int)a.size();i++){
		x*=a[i];
	}
	cout<<x<<"\n";
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
  //  cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
