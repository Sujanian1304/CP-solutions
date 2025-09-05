/*
 * Problem: B. Maximum Product
 * URL: https://codeforces.com/problemset/problem/1406/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n),p,ne;
    for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0) ne.push_back(-a[i]);
		else p.push_back(a[i]);
	}int ans=-1e18;
	if(n==5){
		int s=a[0];
		for(int i=1;i<n;i++) s*=a[i];
		cout<<s<<"\n";
		return;
	}
	sort(p.begin(),p.end());
	sort(ne.begin(),ne.end());
	if(p.size()>=5){
		int d=5;int i=p.size()-1;int s=1;
		while(d--){
			s*=p[i];
			i--;
		}
		ans=max(ans,s);
	}
	if(ne.size()>=2){
		if(p.size()>=3){
		int s=1;s*=ne[ne.size()-1]*ne[ne.size()-2];
		int d=3;int i=p.size()-1;
		while(d--){
			s*=p[i];
			i--;
		}
		ans=max(ans,s);
      	}
		if(ne.size()>=4&&p.size()>=1){
		int	s=1;
	     int d=4;int i=ne.size()-1;
		while(d--){
			s*=ne[i];
			i--;
		}
		s*=p[p.size()-1];
		ans=max(ans,s);
	   }
    }
    if(ne.size()>=5){
		int d=5;int i=0;int s=1;
		while(d--){
			s*=ne[i];
			i++;
		}
		s*=-1;
		ans=max(ans,s);
	}
    cout<<ans<<"\n";
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
