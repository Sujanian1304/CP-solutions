/*
 * Problem: D. Kousuke's Assignment
 * URL: https://codeforces.com/contest/2033/problem/D
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
    int prefix[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=0) prefix[i]=prefix[i-1]+arr[i];
		else prefix[i]=arr[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){cnt++; continue;}
		if(i!=n-1){
		for(int j=i+1;j<n;j++){
			if(prefix[j]==0) {cnt++;i=j;break;}
			else if(prefix[i]==prefix[j]){
				cnt++;
				i=j;
				break;
			}
		}
	}
	}
	cout<<cnt<<"\n";
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
