/*
 * Problem: B. Sort the Subarray
 * URL: https://codeforces.com/problemset/problem/1821/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> arr1(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	    for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int tail=0;int head=0;int ans=0;pair<int,int> ansp={0,0};
	for(int i=0;i<n-1;i++){
		if(arr1[i]<=arr1[i+1]) head++;
		else{
			vector<int> arr3(arr1.begin()+tail,arr1.begin()+head);
			vector<int> arr4(arr.begin()+tail,arr.begin()+head);
			if(arr3!=arr4){
			if(head-tail+1>ans){ansp={tail+1,head+1};}
			}
			head=i+1;
			tail=i+1;
		}
	}
	vector<int> arr3(arr1.begin()+tail,arr1.begin()+head);
			vector<int> arr4(arr.begin()+tail,arr.begin()+head);
			if(arr3!=arr4){
			if(head-tail+1>ans){ansp={tail+1,head+1};}
			}
	cout<<ansp.first<<" "<<ansp.second<<"\n";
	
    
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
