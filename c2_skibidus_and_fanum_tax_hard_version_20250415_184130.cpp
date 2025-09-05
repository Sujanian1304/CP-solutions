/*
 * Problem: C2. Skibidus and Fanum Tax (hard version)
 * URL: https://codeforces.com/contest/2065/problem/C2
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(n),brr(m);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		cin>>brr[i];
	}
	sort(brr.begin(),brr.end());
	arr[0]=min(arr[0],brr[0]-arr[0]);
	for(int i=1;i<n;i++){
		int lo=0;int hi=m-1;int ans=-1;
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
			if(brr[mid]-arr[i]>=arr[i-1]){
				ans=mid;hi=mid-1;
			}else lo=mid+1;
		}
		if(ans==-1&&arr[i]<arr[i-1]) {cout<<"NO\n";return;}
		else if(ans==-1&&arr[i]>=arr[i-1]){continue;}
		else{
		int x=brr[ans]-arr[i];
		if(arr[i]>=arr[i-1]&&x>=arr[i-1]) arr[i]=min(arr[i],x);
		else if(x>=arr[i-1]){arr[i]=x;}
	}
	}
	vector<int>arr1(n);arr1=arr;
	sort(arr1.begin(),arr1.end());
	if(arr1==arr)  cout<<"YES\n";
	else cout<<"NO\n";
		
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
