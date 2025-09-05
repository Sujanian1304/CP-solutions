/*
 * Problem: A. Prime Deletion
 * URL: https://codeforces.com/contest/1861/problem/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
     int n;
     cin>>n;
     int arr[9];
     for(int i=0;i<9;i++){
		 arr[i]=n%10;
		 n=n/10;
	 }int pos1=0;int pos3=0;
	 reverse(arr,arr+9);
	 for(int i=0;i<9;i++){
		 if(arr[i]==1) pos1=i;
		 if(arr[i]==3) pos3=i;
	 }
	 if(pos1<pos3) cout<<"13\n";
	 else cout<<"31\n";
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
