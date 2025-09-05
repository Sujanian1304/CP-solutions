/*
 * Problem: B. Brightness Begins
 * URL: https://codeforces.com/contest/2020/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
int st(int a){
	int lo=1;int hi=a;int ans=0;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(mid*mid>=a){
			ans=mid;
			hi=mid-1;
		}
		else lo=mid+1;
	}
	if(ans*ans==a) return ans;
	else return ans-1;
}
	
void solve() {
    // Your solution here
    int n;cin>>n;int ans=0;
    int lo=1;int hi=2e18;
     while(lo<=hi){
		 int mid=lo+(hi-lo)/2;
		 if(mid-(int)sqrtl(mid)>=n){
			 ans=mid;
			 hi=mid-1;
		 }else lo=mid+1;
	 }
	 cout<<ans<<"\n";
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
