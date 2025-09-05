/*
 * Problem: E. Binary Deque
 * URL: https://codeforces.com/contest/1692/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);int sum=0;int cnt=0;vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]==1) cnt++;
		if(i==0) p[i]=arr[i];
		else p[i]=p[i-1]+arr[i];
	}
	if(sum<m ){cout<<"-1\n";return;}
	int ans=-1e9;
	for(int i=0;i<n;i++){
		int lo=i;int hi=n-1;int a=-1;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(p[mid]-((i>0)?p[i-1]:0)>m){
				a=mid;hi=mid-1;
			}else lo=mid+1;
		}
		if(a==-1) a=n-1;else a--;
		if(a==-1||p[a]-((i>0)?p[i-1]:0)!=m) continue;
		ans=max(ans,a-i+1);
	}
	cout<<n-ans<<"\n";
			
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
