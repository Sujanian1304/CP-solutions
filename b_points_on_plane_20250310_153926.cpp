/*
 * Problem: B. Points on Plane
 * URL: https://codeforces.com/contest/1809/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector<int> arr;
void solve() {
    // Your solution here
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    while (t--) {
        int n;cin>>n;
        int lo=0;int hi=1e9+1;int ans=-1;
        while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(mid*mid>=n){
				ans=mid;
				hi=mid-1;
			}else{
				lo=mid+1;
			}
		}
		cout<<ans-1<<"\n";
			
    }
    
    return 0;
}
