/*
 * Problem: B. Special Permutation
 * URL: https://codeforces.com/contest/1612/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c;
    cin>>a>>b>>c;
    int l=0;int s=0;
    if(b<c){
		 l=(a-b)-1;
		 s=(c-1)-1;
	}
	else{
		l=a-b;
		s=c-1;
	}
    if(l<(a/2-1)||s<(a/2-1)) cout<<"-1\n";
    else{
		vector<int> arr;map<int,int> mp;arr.push_back(b);mp[b]++;
		int x=a/2-1;int z=a;
		while(x--){
			if(z!=c){arr.push_back(z);
			mp[z]++;}
			else{x++;}
			z--;
		}
		x=a/2;
		while(x--){
			if(mp[c]==0) {arr.push_back(c);mp[c]++;}
			else x++;
			c--;
		}
		for(auto&v:arr) cout<<v<<" ";
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
