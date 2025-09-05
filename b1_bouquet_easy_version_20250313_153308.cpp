/*
 * Problem: B1. Bouquet (Easy Version)
 * URL: https://codeforces.com/contest/1995/problem/B1
 * Time Limit: 1.5 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	sort(arr,arr+a);
	int tail=0;int head=-1;int sum=0;int ans=0;
	while(tail<a){
		while(head+1<a&&arr[head+1]-arr[tail]<=1&&sum+arr[head+1]<=b){
			head++;
			sum+=arr[head];
		}
		ans=max(ans,sum);
		if(head<tail){
			tail++;
			head=tail-1;
		}
		else {
			sum-=arr[tail];
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
