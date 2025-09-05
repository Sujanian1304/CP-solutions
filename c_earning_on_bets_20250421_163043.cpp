/*
 * Problem: C. Earning on Bets
 * URL: https://codeforces.com/contest/1979/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x,const vector<int>& arr, int n, int sum){
	int y=arr[0]*x;
		vector<int> ans(n);int sum1=x;ans[0]=x;
		for(int i=1;i<n;i++){
			ans[i]=(y+arr[i]-1)/arr[i];
			sum1+=ans[i];
		}
		for(int i=0;i<n;i++){
			if(sum1>=ans[i]*arr[i]){return false;}
		}
		return true;
	}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int sum=0;vector<pair<int,int>> p;
    for(int i=0;i<n;i++) {cin>>arr[i];p.push_back({arr[i],i});sum+=arr[i];}
    //if(sum%2){cout<<"-1\n";return;}
    sort(arr.begin(),arr.end(),greater<int>());
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
   int lo=1;int hi=1e7;int value=-1;
   while(lo<=hi){
	   int mid=lo+(hi-lo)/2;
	   if(check(mid,arr,n,sum)){
		   value=mid;
		   hi=mid-1;
	   }else lo=mid+1;
   }
   if(value==-1) {cout<<"-1\n";return;}
   int y=arr[0]*value;
		vector<int> ans(n);int sum1=value;ans[0]=value;
		for(int i=1;i<n;i++){
			ans[i]=(y+arr[i]-1)/arr[i];
			sum1+=ans[i];
		}
			vector<int> fans(n);
			for(int i=0;i<n;i++){
				fans[p[i].second]=ans[i];
			}
			for(auto&v:fans) cout<<v<<" ";
			cout<<"\n";
			return;
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
