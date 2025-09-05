/*
 * Problem: C. Make Them Equal
 * URL: https://codeforces.com/problemset/problem/1594/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;char b;cin>>n>>b;
    string s;cin>>s;
    set<char> t;
    for(int i=0;i<n;i++){
		t.insert(s[i]);
	}
	if(t.size()==1&&s[0]==b){cout<<"0\n";return;}
	int x=n/2;
	for(int i=n-1;i>=x;i--){
		if(s[i]==b){
			cout<<"1\n";
			cout<<i+1<<"\n";return;}
		}
		cout<<"2\n";
		cout<<n<<" "<<n-1<<"\n";
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
