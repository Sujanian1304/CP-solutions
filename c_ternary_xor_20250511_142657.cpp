/*
 * Problem: C. Ternary XOR
 * URL: https://codeforces.com/problemset/problem/1328/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;
    string t="1";string x="1";int ans=0;
    for(int i=1;i<n;i++){
		if(s[i]=='1'){
			t+='1';x+='0';
			ans=i;break;
		}
		if(s[i]=='2'){
			t+='1';x+='1';
		}
		else{
			x+='0';t+='0';
		}
	}
	if(ans>0){
	for(int i=ans+1;i<n;i++){
		t+='0';x+=s[i];
	}
}
	cout<<t<<"\n";
	cout<<x<<"\n";
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
