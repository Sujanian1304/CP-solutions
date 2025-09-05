/*
 * Problem: C. Splitting Items
 * URL: https://codeforces.com/problemset/problem/2004/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp1(int a,int b){
	return a>b;
}
void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,cmp1);
	
	int sum=0;int sum1=0;
	for(int i=1;i<n;i+=2){
		int v=min(arr[i-1]-arr[i],k);
		arr[i]+=v;
		k-=v;
		sum+=(arr[i-1]-arr[i]);
	}
	if(n&1LL) sum+=arr[n-1];
	cout<<sum<<"\n";

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
