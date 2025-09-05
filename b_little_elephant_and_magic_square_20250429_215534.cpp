/*
 * Problem: B. Little Elephant and Magic Square
 * URL: https://codeforces.com/problemset/problem/259/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    vector<vector<int>> arr(3,vector<int>(3));
    for(int  i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	vector<int> ans;int ma=0;
	for(int i=0;i<3;i++){
		int x=0;
		for(int j=0;j<3;j++){
			x+=arr[i][j];
		}
		ma=max(ma,x);
		ans.push_back(x);
	}
	deque<int> a;
	a.push_back(((ans[2]-ans[0])+ans[1])/2);
	a.push_back(ans[2]-a.back());
	a.push_back(ans[0]-a.back());
	for(int  i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]==0){arr[i][j]=a.front();a.pop_front();}
		}
	}
	for(int  i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
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
