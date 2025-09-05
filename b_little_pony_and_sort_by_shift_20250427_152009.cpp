/*
 * Problem: B. Little Pony and Sort by Shift
 * URL: https://codeforces.com/problemset/problem/454/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> b(arr.begin(),arr.end());
	sort(b.begin(),b.end());
	if(b==arr){cout<<0<<"\n";return;}
	int ans=0;int pos=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){ans++;pos=i+1;}
	}
	if(ans>1) cout<<"-1\n";
	else if(ans==1&&arr[0]>arr[n-1]){cout<<n-pos<<"\n";}
	else cout<<"-1\n";
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
