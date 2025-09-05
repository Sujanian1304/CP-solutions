/*
 * Problem: F. Money Trees
 * URL: https://codeforces.com/contest/1873/problem/F
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n),brr(n);vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0) p[i]=arr[i];
		else p[i]=p[i-1]+arr[i];
	}
	for(int j=0;j<n;j++){
		cin>>brr[j];
	}
	vector<int> len(n);
	int tail=0;int head=-1;
	while(tail<n){
		while(head+1<n){
			if(head>-1&&brr[head]%brr[head+1]!=0) break;
			head++;
		}
		len[tail]=head-tail+1;
		if(head<tail){
			tail++;
			head=tail-1;
		}else tail++;
	}
	for(auto&v:len) cout<<v<<" ";
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
