/*
 * Problem: C. Challenging Cliffs
 * URL: https://codeforces.com/problemset/problem/1537/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>a(n);map<int,int> mp;bool flag=0;int ans=-1;
    for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
		if(!flag&&mp[a[i]]>=2) {ans=i;flag=1;}
	}
	if(ans==-1){
		sort(a.begin(),a.end());
		int mi=1e9;int s=-1;
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i]<mi){
				mi=a[i+1]-a[i];
				s=i+1;
			}
		}
		cout<<a[s-1]<<" ";
		for(int i=s+1;i<n;i++){
			cout<<a[i]<<" ";
		}
		for(int i=0;i<s-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[s]<<"\n";
			
	}else{
		vector<int> b,c;
		for(int i=0;i<n;i++){if(a[i]<a[ans])b.push_back(a[i]);else if(a[i]>a[ans]) c.push_back(a[i]);else if(a[i]==a[ans]&&mp[a[i]]>2){c.push_back(a[i]);mp[a[i]]--;}}
		sort(b.begin(),b.end());sort(c.begin(),c.end());
		cout<<a[ans]<<" ";
		for(auto&v:c){cout<<v<<" ";}
		for(auto&v:b){cout<<v<<" ";}
		cout<<a[ans]<<"\n";
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
