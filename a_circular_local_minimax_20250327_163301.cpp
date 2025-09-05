/*
 * Problem: A. Circular Local MiniMax
 * URL: https://codeforces.com/problemset/problem/1685/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    
    int n;cin>>n;
    int arr[n];map<int,int> mp;set<int> st;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		st.insert(arr[i]);
		mp[arr[i]]++;
	}
	 
	 if(n%2){
		 cout<<"NO\n";
	 }
	 else{
		 sort(arr,arr+n);
		 bool flag=1;
		 for(int i=1;i<n/2;i++){
			 if(arr[i]==arr[i+n/2-1]) {flag=0;break;}
		 }
		 if(!flag) cout<<"No\n";
		 else{
			 cout<<"Yes\n";int y=n-1;int z=0;
			 for(int i=0;i<n;i++){
				 if(i%2){
					 cout<<arr[y]<<" ";
					 y--;
				 }
				 else{ cout<<arr[z]<<" ";
					 z++;
				 }
			 }
			 cout<<"\n";
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
