/*
 * Problem: B. Array merging
 * URL: https://codeforces.com/problemset/problem/1831/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr,arr1;
    for(int i=0;i<n;i++){
		int v;cin>>v;
		arr.push_back(v);
	}
	    for(int i=0;i<n;i++){
		int v;cin>>v;
		arr1.push_back(v);
	}
      map<int,int> mp;map<int,int> cnt;
	 int tail=0;int head=-1;
	            while(tail<n){
					while(head+1<n&&arr[head+1]==arr[tail]){
						head++;
					}
					cnt[arr[tail]]++;int x=head-tail+1;
					if(cnt[arr[tail]]==1){
					  mp[arr[tail]]=head-tail+1;
				  }else{
					  mp[arr[tail]]=max(x,mp[arr[tail]]);
					  }
					 if(head<tail){
						 tail++;
						 head=tail-1;
					 }
					 else {
						 tail++;
					 }
				 }
				 map<int,int> mp1;map<int,int> cnt1;
	              tail=0; head=-1;
	            while(tail<n){
					while(head+1<n&&arr1[head+1]==arr1[tail]){
						head++;
					}
					 cnt1[arr1[tail]]++;int x=head-tail+1;
					if(cnt1[arr1[tail]]==1){
					  mp1[arr1[tail]]=head-tail+1;
				  }else{
					  //cout<<x<<mp[arr1[tail]]<<" ";
					  mp1[arr1[tail]]=max(x,mp1[arr1[tail]]);
					  }
					 if(head<tail){
						 tail++;
						 head=tail-1;
					 }
					 else {
						 tail++;
					 }
				 }
				 int fans=0;
		for(auto&v:mp){
			fans=max(fans,v.second);
			auto it=mp1.find(v.first);
			if(it!=mp1.end()) {fans=max(fans,v.second+it->second);}
		}
		for(auto&v:mp1){
			fans=max(fans,v.second)	;
		}
		cout<<fans<<"\n";		 
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
