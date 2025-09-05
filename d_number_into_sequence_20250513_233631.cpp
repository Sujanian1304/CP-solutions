/*
 * Problem: D. Number into Sequence
 * URL: https://codeforces.com/problemset/problem/1454/D
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int s;cin>>s;
    int n=s;
    vector<int> a;map<int,int> mp;
    while(n%2==0){
		a.push_back(2);
		mp[2]++;
		n/=2;
	}
	int ans=1;
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			mp[i]++;
			n/=i;
		}
	}
	if(n>2){
		mp[n]++;
	}
	int ma=0;int c=0;
	for(auto&v:mp){
		if(v.second>ma){
			ma=v.second;
			c=v.first;
		}
	}
	if(ma==1){
		cout<<"1\n";
		cout<<s<<"\n";
	}else{
		cout<<ma<<"\n";
		int x=ma-1;
		while(x--){cout<<c<<" ";}
		for(auto&v:mp){
			if(v.first!=c){
				int d=v.second;
				while(d--){
				ans*=v.first;
			}
			}
		}
		cout<<ans*c<<"\n";
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
