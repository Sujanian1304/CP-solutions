/*
 * Problem: B. Vasya and Wrestling
 * URL: https://codeforces.com/problemset/problem/493/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a,b;int l=0;
    for(int i=0;i<n;i++){
		int x;cin>>x;
		if(i==n-1) l=x;
		if(x>0) a.push_back(x);
		else b.push_back(-x);
	}
	int s1=accumulate(a.begin(),a.end(),0LL);
	int s2=accumulate(b.begin(),b.end(),0LL);
	if(s1>s2){cout<<"first\n";}
	else if(s1<s2){cout<<"second\n";}
	else{
		int x=a.size();int y=b.size();
		for(int i=0;i<min(x,y);i++){
			if(a[i]<b[i]){cout<<"second";return;}
			else if(a[i]>b[i]){cout<<"first";return;}
		}
		if(l<0) cout<<"second";
		else cout<<"first";
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
