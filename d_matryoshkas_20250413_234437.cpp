/*
 * Problem: D. Matryoshkas
 * URL: https://codeforces.com/contest/1790/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;map<int,int> mp;int m=0;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	vector<int> ans;ans.push_back(arr[0]);
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]==1) ans[ans.size()-1]=arr[i];
		else {
			if(ans.size()==1) ans.push_back(arr[i]);
			else{
				int lo=0;int hi=ans.size()-1;int z=-1;
				while(lo<=hi){
					int mid=lo+(hi-lo)/2;
					if(ans[mid]>=arr[i]){
						z=mid;
						hi=mid-1;
					}
					else {
						lo=mid+1;
					}
				}
					if(z==0||z==-1) ans.push_back(arr[i]);
					else{
						z--;
						if(arr[i]-ans[z]==1) ans[z]=arr[i];
						else ans.push_back(arr[i]);
					}
				
			}
		}
	}
	cout<<ans.size()<<"\n";
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
