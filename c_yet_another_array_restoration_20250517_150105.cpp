/*
 * Problem: C. Yet Another Array Restoration
 * URL: https://codeforces.com/problemset/problem/1409/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,x,y;cin>>n>>x>>y;
    int d=y-x;int cnt=0;int num=0;
    for(int i=1;i*i<=d;i++){
		if(d%i==0){
			if(d/i+1<=n&&cnt<d/i+1){
				//cout<<d/i;
				cnt=d/i+1;
				num=i;
			}
		    if(i+1<=n&&cnt<i+1){
				//cout<<i;
				cnt=i+1;
				num=d/i;
			}
		}
	}
	vector<int> ans;
	for(int i=x;i<=y;i+=num){
		ans.push_back(i);
	}
    while(cnt<n&&x>0){
		x-=num;
		if(x<1) break;
		ans.push_back(x);
		cnt++;
	}
	while(cnt<n){
		y+=num;
		ans.push_back(y);
		cnt++;
	}
	for(auto&v:ans){cout<<v<<" ";}
	cout<<"\n";
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
