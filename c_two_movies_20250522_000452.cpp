/*
 * Problem: C. Two Movies
 * URL: https://codeforces.com/contest/1989/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int cnt1=0;int cnt2=0;vector<int> s;
	for(int i=0;i<n;i++){
		if(a[i]==b[i]&&a[i]!=0){s.push_back(a[i]);}
		else{
			if(a[i]>b[i]) cnt1+=a[i];
		    else cnt2+=b[i];
	     }
	}
	for(int i=0;i<(int)s.size();i++){
		if(s[i]<0){
			if(cnt1>cnt2){cnt1--;}
			else cnt2--;
		}else{
			if(cnt1>cnt2){cnt2++;}
			else cnt1++;
		}
	}
	cout<<min(cnt1,cnt2)<<"\n";
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
