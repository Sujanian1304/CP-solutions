/*
 * Problem: B. Array Recoloring
 * URL: https://codeforces.com/contest/2075/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
        int a,b;cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	if(b>=2){
	sort(arr,arr+a);
	int ans=0;int i=1;b++;
	while(b--){
		ans+=arr[a-i];
		i++;
	}
	cout<<ans<<"\n";
}
else{
	int x=0;
	if(a>2){
	for(int i=1;i<a-1;i++){
		x=max(arr[i],x);
	}
	int ans1=x+max(arr[0],arr[a-1]);
	int ans2=arr[0]+arr[a-1];
	cout<<max(ans1,ans2)<<"\n";
}
else{
	cout<<arr[0]+arr[1]<<"\n";
	
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
