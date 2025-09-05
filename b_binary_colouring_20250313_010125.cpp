/*
 * Problem: B. Binary Colouring
 * URL: https://codeforces.com/contest/1977/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(31,0);int  pos=0;
    for(int i=0;i<30;i++){
		if(1LL&(n>>i)){
			if(arr[i]){
				arr[i]=0;arr[i+1]=1;pos=max(pos,i+1);
			}else if(i>0){
				if(arr[i-1]==1){
					arr[i-1]=-1;
					arr[i+1]=1;pos=max(pos,i+1);
				}else {
					arr[i]=1;pos=max(pos,i);
				}
			}else if(i==0){
				arr[i]=1;
			}
		}
	}
	cout<<pos+1<<"\n";
	for(int i=0;i<=pos;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
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
