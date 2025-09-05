/*
 * Problem: B. Raspberries
 * URL: https://codeforces.com/contest/1888/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=1e9;
	if(m==4){
		int cnt1=0;int cnt2=0;
		for(int i=0;i<n;i++){
		 if(arr[i]%4==0) ans=0;
		 else {
			 if(arr[i]%2==0) cnt2++;
			 else{
				 int x=4*((arr[i]+4-1)/4)-arr[i];
				 if(x==1) ans=min(ans,x); 
			 }
		}
	}
		if(cnt2==0) ans=min(ans,2LL);
		else if(cnt2==1) ans=min(ans,1LL);
		else ans=0;
		cout<<ans<<"\n";
	}
	else {
		for(int i=0;i<n;i++){
			if(arr[i]==m){
				ans=0;break;
			}
			else if(arr[i]>m){
				ans=min(ans,m*((arr[i]+m-1)/m)-arr[i]);
			}
			else{
				ans=min(ans,(m-arr[i]));
			}
		}
		cout<<ans<<"\n";
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
