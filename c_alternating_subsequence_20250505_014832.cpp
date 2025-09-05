/*
 * Problem: C. Alternating Subsequence
 * URL: https://codeforces.com/problemset/problem/1343/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int e=0;
    if(a[0]<0) e=1;
    vector<int> ans;
    for(int i=0;i<n;i++){
		if(a[i]>0){
			if(e==0){ans.push_back(a[i]);e=1;}
			else {
				if(ans.back()<a[i]){ans.pop_back();ans.push_back(a[i]);
				}
			}
		}
		if(a[i]<0){
			if(e==1){ans.push_back(a[i]);e=0;}
			else{
				if(ans.back()<a[i]){ans.pop_back();ans.push_back(a[i]);
				}
			}
		}
	}
	int y=accumulate(ans.begin(),ans.end(),0LL);
	cout<<y<<"\n";
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
