/*
 * Problem: A. Ahahahahahahahaha
 * URL: https://codeforces.com/contest/1407/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}
   if(n==2) {
	   if(arr[0]==arr[1]){
		   cout<<"2\n";
		   cout<<arr[0]<<" "<<arr[1]<<"\n";
	   }else{
		   cout<<"1\n";
		   cout<<((arr[0]==0)?arr[0]:arr[1])<<"\n";
	   }
   }else{
	   vector<int> ans;
	   for(int i=0;i<n;i+=4){
		  if(i+4<=n){
			  int sum=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
			  if(sum>=2){
				  ans.push_back(1);
				  ans.push_back(1);
			  }
			  else{
				  ans.push_back(0);
				  ans.push_back(0);
			  }
	   }  
   }
   if(n%4) {if(arr[n-2]==arr[n-1]){ans.push_back(arr[n-2]);ans.push_back(arr[n-1]);}else{
	   ans.push_back(0);}}
   cout<<ans.size()<<"\n";
   for(auto&v:ans) cout<<v<<" ";
   cout<<"\n";
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
