/*
 * Problem: C. Contrast Value
 * URL: https://codeforces.com/problemset/problem/1832/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> brr(n);vector<int> arr;
    for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	arr.push_back(brr[0]);
	for(int i=1;i<n;i++){
		if(brr[i]==brr[i-1]) continue;
		else arr.push_back(brr[i]);
	}
	int ans=0;int y=arr.size();
	if(y==1){cout<<1<<"\n";return;}
	for(int i=0;i<y-1;i++){
		bool flag=0;
		while(arr[i]>=arr[i+1]&&i+1<y){
			i++;flag=1;
		}
		if(flag) {flag=0;if(ans>0) ans++;else ans+=2;}
		while(arr[i]<=arr[i+1]&&i+1<y){
			i++;flag=1;
		}
		if(flag) {if(ans>0) ans++;else ans+=2;flag=0;}
		i--;
	}
	cout<<ans<<"\n";		
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
