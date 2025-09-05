/*
 * Problem: B. Subsequence Update
 * URL: https://codeforces.com/problemset/problem/2063/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a=r-l+1;
	if(l==1||r==n){
	sort(arr,arr+n);
	int ans=0;
	for(int i=0;i<a;i++){
		ans+=arr[i];
	}
	cout<<ans<<"\n";
}
else{
	vector<int> arr1(arr,arr+l-1);vector<int> arr2(arr+r,arr+n);
	sort(arr1.begin(),arr1.end());sort(arr2.begin(),arr2.end());
	vector<int> arr3(arr+l-1,arr+r);
	int z=accumulate(arr+(l-1),arr+(r),0LL);
	for(int i=0;i<min(a,(l-1));i++){
		arr3.push_back(arr1[i]);
	}
	sort(arr3.begin(),arr3.end());
	int x=accumulate(arr3.begin(),arr3.begin()+a,0LL);
	vector<int> arr4(arr+l-1,arr+r);
	for(int i=0;i<min(a,(n-r));i++){
		arr4.push_back(arr2[i]);
	}
	sort(arr4.begin(),arr4.end());
	int y=accumulate(arr4.begin(),arr4.begin()+a,0LL);
	cout<<min(x,min(y,z))<<"\n";
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
