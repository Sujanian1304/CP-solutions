/*
 * Problem: D. Power Products
 * URL: https://codeforces.com/problemset/problem/1225/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> p(100010);
void pre(){
	for(int i=0;i<100010;i++){
		p[i]=i;
	}
	for(int i=2;i<100010;i++){
		if(p[i]==i){
			for(int j=2*i;j<100010;j+=i){
				if(p[j]==j){
					p[j]=i;
				}
			}
		}
	}
}
map<int,int> factors(int x){
	map<int,int> mp;
	while(x!=1){
		mp[p[x]]++;
		x/=p[x];
	}
	return mp;
}
pair<int,int> red_comp(int x,int m){
	auto mp= factors(x);
	int red=1;int comp=1;
    for(int i=1;i<m;i++){	
	   for(auto&v:mp){
		    if(v.second%m==i){
				for(int j=0;j<i;j++) red*=v.first;
				for(int j=0;j<m-i;j++) comp*=v.first;
			}
		}
	}
	return {red,comp};
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);
    map<int,int> freq;
    int ans=0;;i_+;
    for(int i=0;i<n;i++){
		cin>>a[i];
		auto temp=red_comp(a[i],m);
		freq[temp.first]++;
	}
	 for(int i=0;i<n;i++){
		auto temp=red_comp(a[i],m);
		if(temp.second==temp.first){ans+=freq[temp.second]-1;}
		else ans+=freq[temp.second];
	}
	cout<<ans/2<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    pre();
    while (t--) {
        solve();
    }
    
    return 0;
}
