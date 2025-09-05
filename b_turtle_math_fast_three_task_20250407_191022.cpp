/*
 * Problem: B. Turtle Math: Fast Three Task
 * URL: https://codeforces.com/contest/1933/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> brr;int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]%3) brr.push_back(arr[i]);
	}
	if(sum%3==0) cout<<"0\n";
	else{
		if((3-sum%3)==1) cout<<"1\n";
		else{
			for(int i=0;i<brr.size();i++){
				int x=sum-brr[i];
				if(x%3==0) {cout<<"1\n";return;}
			}
			cout<<"2\n";
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
