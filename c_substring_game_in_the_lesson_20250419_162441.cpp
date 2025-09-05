/*
 * Problem: C. Substring Game in the Lesson
 * URL: https://codeforces.com/contest/1220/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;
    cin>>s;int n=s.size();
    cout<<"Mike"<<"\n";char min_s=s[0];
    for(int i=1;i<n;i++){
		if(s[i]>min_s){cout<<"Ann\n";}
		else{
			cout<<"Mike\n";
			min_s=s[i];
		}
	}
	cout<<"\n";	
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
