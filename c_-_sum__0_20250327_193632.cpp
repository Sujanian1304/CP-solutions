/*
 * Problem: C - Sum = 0
 * URL: https://atcoder.jp/contests/abc362/tasks/abc362_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> arr;int suml=0;int sumr=0;
    for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr.push_back({a,b});
		suml+=a;sumr+=b;
	}
	if(suml<=0&&sumr>=0){
		cout<<"Yes\n";
		int x=suml;
		for(int i=0;i<n;i++){
			int y=min(arr[i].second-arr[i].first,-x);
			cout<<arr[i].first+y<<" ";
			x+=y;
		}
	}
	else cout<<"No\n";
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
