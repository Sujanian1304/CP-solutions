/*
 * Problem: B. Cat, Fox and the Lonely Array
 * URL: https://codeforces.com/contest/1973/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int m,vector<int>& a){
	int n=a.size();set<int> st;
	vector<int> b(20);int c=0;
	for(int j=0;j<20;j++){  
	   for(int i=0;i<m;i++){
		   if(1LL&(a[i]>>j)) b[j]++;
	   }
   }
   for(int j=0;j<20;j++){ 
	   if(b[j]>0) c+=(1LL<<j);
   }
   st.insert(c);
   for(int i=m;i<n;i++){
	   for(int j=0;j<20;j++){
	       if(1LL&(a[i-m]>>j)) {
			  if(b[j]==1) {c-=(1LL<<j);}b[j]--;
		  }
	   }
	  for(int j=0;j<20;j++){ 
		   if(1LL&(a[i]>>j)){
			    b[j]++;
			    if(b[j]==1){c+=(1LL<<j);}
			}
	   }
	   st.insert(c);
   }
   if(st.size()==1) return 1;
   else return 0;
}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int lo=1;int hi=n;int ans=0;
    while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(check(mid,a)){
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
