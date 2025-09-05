/*
 * Problem: B. Maximum Rounding
 * URL: https://codeforces.com/problemset/problem/1857/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;
    cin>>s;
    vector<int> arr;
    int n=s.size();
    for(int i=0;i<n;i++){
		arr.push_back(s[i]-48);
	}
    if(s.size()==1){
		if(s[0]-48<5) cout<<s<<"\n";
		else cout<<"10\n";
	}else{
		if(s[0]-48>=5){
			vector<int> ans(n+1,0);
			ans[0]=1;
			for(auto&v:ans) cout<<v;
			cout<<"\n";
		}
		else{
			int l=-1;
			for(int i=n-1;i>0;i--){
				if(arr[i]>=5){
				 arr[i-1]+=1;
				// fill(arr.begin() + i, arr.end(), 0);
				l=i;
				}
				
			}
			if(l!=-1){
				for(int i=l;i<n;i++){
					arr[i]=0;
				}
			}
			if(arr[0]>=5){arr.resize(n+1,0);arr[0]=1;}
			for(auto&v:arr) cout<<v;
			cout<<"\n";
	 }
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
