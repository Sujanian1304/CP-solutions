/*
 * Problem: A. Square Year
 * URL: https://codeforces.com/contest/2114/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int y=stoi(s);
    int x=(int)(floor(sqrt(y)+0.5)); ;
    if(x*x==y){
		int a = (x - 1) / 2;
        int b = x - a;
         cout <<a<<" "<<b<<"\n";
	}
	else{
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
