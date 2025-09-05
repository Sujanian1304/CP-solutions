/*
 * Problem: B. Swap and Reverse
 * URL: https://codeforces.com/contest/1864/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    string s;
    cin>>s;
    if(m%2==0){
		sort(s.begin(),s.end());
		cout<<s<<"\n";
	}else{
		string s1="";string s2="";
		for(int i=1;i<=n;i++){
			if(i%2){
				s1+=s[i-1];
			}else{
				s2+=s[i-1];
			}
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		int j=0;int k=0;
		for(int i=1;i<=n;i++){
			if(i%2){
				cout<<s1[j];j++;
			}else{
				cout<<s2[k];k++;
			}
		}
		cout<<"\n";
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
