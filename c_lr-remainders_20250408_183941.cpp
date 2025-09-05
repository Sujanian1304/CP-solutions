/*
 * Problem: C. LR-remainders
 * URL: https://codeforces.com/contest/1932/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    deque<int> arr(n);int p=1;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		p=(p*arr[i])%m;
	}
	string s;cin>>s;
	int l=0;int r=n-1;
	for(int i=0;i<n-1;i++){
		if(s[i]=='L') l++;
		else r--;
	}
	vector<int> b(n);
	b[n-1]=arr[l]%m;
	for(int i=n-2;i>=0;i--){
		if(s[i]=='L'){
			b[i]=(b[i+1]*arr[--l])%m;
		}
		else{
			b[i]=(b[i+1]*arr[++r])%m;
		}
	}
	//reverse(b.begin(),b.end());
	for(auto&v:b) cout<<v<<" ";
	cout<<"\n";
	
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
