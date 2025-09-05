/*
 * Problem: B - Four Hidden
 * URL: https://atcoder.jp/contests/abc403/tasks/abc403_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s,t;cin>>s>>t;int x=t.size();int y=s.size();vector<int> f;
    for(int i=0;i<y;i++){
		if(s[i]==t[0]&&(y-i>=x)){
			int a=1;bool flag=1;
			for(int j=i+1;j<i+x;j++){
				if(s[j]==t[a]||s[j]=='?'){a++;continue;}
				else {flag=0;break;}
				a++;
			}
			if(flag){cout<<"Yes\n";return;}
		}
		if(s[i]=='?'){f.push_back(i);}
	}
	for(auto&v:f){
		if(y-v>=x){
			int a=1;bool flag=1;
			for(int j=v+1;j<v+x;j++){
				if(s[j]==t[a]||s[j]=='?'){a++;continue;}
				else {flag=0;break;}
				a++;
			}
			if(flag){cout<<"Yes\n";return;}	
		}
	}
	cout<<"No\n";	
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
