/*
 * Problem: B. Ugu
 * URL: https://codeforces.com/contest/1732/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;cin>>s;int b=0;int cnt=0;bool flag=0;
    for(int i=0;i<n;i++){
	  if(s[i]=='1'){
		  while(i<n&&s[i]=='1'){i++;}
		  if(i!=n)flag=1;
		  else if(i==n) flag=0;
		  b=i;break;}
    }
    if(flag==0){cout<<cnt<<"\n";return;}
    int j=0;
    for(int i=b;i<n;i++){
		if(j==0&&s[i]=='0'){
			cnt++;
			while(i<n&&s[i]=='0'){i++;}
			i--;j=1;
		}
		if(j==1&&s[i]=='1'){
			cnt++;
			while(i<n&&s[i]=='1'){i++;}
			i--;j=0;
		}
	}
	cout<<cnt<<"\n";

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
