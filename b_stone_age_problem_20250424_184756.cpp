/*
 * Problem: B. Stone Age Problem
 * URL: https://codeforces.com/problemset/problem/1679/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}bool flag=0;int cnt=0;int last=0;vector<bool> brr(n, false);

	 for(int i=0;i<m;i++){
		 int a;cin>>a;
		 if(a==1){
			 int b,c;cin>>b>>c;
			 if(!flag){
			 //cout<<c<<"\n";
			 sum+=(c-arr[b-1]);
			 cout<<sum<<"\n";
			 arr[b-1]=c;
		 }else{
			 if(!brr[b-1]){
			 sum+=(c-last);
			 cnt++;arr[b-1]=c;
			 brr[b-1]=1;}
			 else{
				  sum+=(c-arr[b-1]);
			  }
			 cout<<sum<<"\n";
			 if(cnt==n) flag=0;
		 }
		 }
		 else{
			 int b;cin>>b;
			  brr.assign(n,0);
			 sum=b*n;flag=1;cnt=0;last=b;
			 cout<<sum<<"\n";
		 }
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
