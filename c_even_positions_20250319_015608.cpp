/*
 * Problem: C. Even Positions
 * URL: https://codeforces.com/problemset/problem/1997/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}int opbr=0;
	for(int i=0;i<n;i++){
		if(arr[i]=='_'){if(opbr==0) {arr[i]='(';opbr++;}else {arr[i]=')';opbr--;}}
		else if(arr[i]=='(') opbr++;
		else opbr--;
	}int cost1=0;int cost2=0;
	for(int i=0;i<n;i++){
		if(arr[i]==')') cost1+=(i+1);
		else cost2+=(i+1);
	}
	cout<<cost1-cost2<<"\n";
		
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
