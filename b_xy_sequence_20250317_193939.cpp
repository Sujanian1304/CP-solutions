/*
 * Problem: B. XY Sequence
 * URL: https://codeforces.com/contest/1657/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> arr(a+1);
    arr[0]=0;
    for(int i=1;i<=a;i++){
		if(arr[i-1]+c>b){arr[i]=arr[i-1]-d;}
		else arr[i]=arr[i-1]+c;
	}
	//for(auto&v:arr) cout<<v<<" ";
	int x=accumulate(arr.begin(),arr.end(),0LL);
	cout<<x<<"\n";
	
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
