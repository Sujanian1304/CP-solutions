/*
 * Problem: D. For Wizards, the Exam Is Easy, but I Couldn't Handle It
 * URL: https://codeforces.com/contest/2072/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;int ind=0;int ind_l=0;
	for(int i=0;i<n;i++){
		int cnt1=0;int cnt2=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){ cnt1++;}
			else if(arr[i]<arr[j]) cnt2++;
			if(cnt2-cnt1<ans){
			ans=cnt2-cnt1;
			ind=i;
			ind_l=j;
		}
		}
	}
	 cout<<ind+1<<" "<<ind_l+1<<"\n";
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
