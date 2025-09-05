/*
 * Problem: C. Inhabitant of the Deep Sea
 * URL: https://codeforces.com/contest/1955/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    deque<int> arr(n);vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0) p[i]=arr[i];
		else p[i]=arr[i]+p[i-1];
	}
	if(p[n-1]<=m) cout<<n<<"\n";
	else{
		int sum=0;int i=0;
		while(sum<m){
			if(i%2==0) {sum+=arr.front();if(sum>m){ break;} arr.pop_front();} 
			else {sum+=arr.back();if(sum>m) {break;}arr.pop_back();} 
			i++;
		}
		cout<<n-arr.size()<<"\n";
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
