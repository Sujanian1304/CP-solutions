/*
 * Problem: C. Asuna and the Mosquitoes
 * URL: https://codeforces.com/contest/2092/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[n-1]%2){
		int sum=arr[n-1];int sume=0;int sumo=0;int cnto=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]%2) {sumo+=arr[i];cnto++;}
			else sume+=arr[i];
		}
		if(sume==0) cout<<sum<<"\n";
		else{
			sum+=sume+sumo-cnto;
		cout<<sum<<"\n";}
	}
	else{
		int sum=arr[n-1];int sumo=0;int sume=0;int cnto=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]%2) {sumo+=arr[i];cnto++;}
			else sume+=arr[i];
		}
		if(sumo==0) cout<<sum<<"\n";
		else{  sum+=sumo-cnto+1+sume;
		cout<<sum<<"\n";}
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
