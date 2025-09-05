/*
 * Problem: C. New Game
 * URL: https://codeforces.com/contest/2025/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	sort(arr.begin(),arr.end());
	int tail=0;int head=0;int ans=0;
	while(tail<n){
		while(head+1<n&&(arr[head+1]-arr[head]<2)&&arr[head+1]-arr[tail]<m){
			head++;
		}
		ans=max(ans,head-tail+1);
		if(tail>=head){
			tail++;
			head=tail;
		}
		else{
			tail++;
		}
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
