/*
 * Problem: C. Breach of Faith
 * URL: https://codeforces.com/contest/2078/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[2*n];map<int,int> mp;int sum=0;
    for(int i=0;i<2*n;i++){
		cin>>arr[i];
		if(i%2) sum-=arr[i];
		else  sum+=arr[i];
		mp[arr[i]]++;
	}int x=0;
	if(sum<0) x=-sum;
	else x=sum;
	if(mp[x]==0){
		if(sum>0) {
			cout<<abs(sum)<<" ";
			for(int i=0;i<2*n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
		}
		else{
			for(int i=0;i<2*n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<abs(sum)<<" ";
			cout<<"\n";
		}
	}else{
		sum=(2*(arr[2*n-1]-arr[2*n-2]))+sum;
		if(sum>0) {
			cout<<(sum)<<" ";
			for(int i=0;i<2*n-2;i++){
				cout<<arr[i]<<" ";
			}
			cout<<arr[2*n-1]<<" "<<arr[2*n-2];
			cout<<"\n";
		}
		else{
			for(int i=0;i<2*n-2;i++){
				cout<<arr[i]<<" ";
			}
			cout<<arr[2*n-1]<<" "<<arr[2*n-2];
			cout<<abs(sum)<<" ";
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
