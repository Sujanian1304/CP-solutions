/*
 * Problem: B. Move to the End
 * URL: https://codeforces.com/contest/2104/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);int sum=0;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	int p_sum=arr[0];
	int s_sum=sum;
	deque<int> ans;ans.push_front(sum);
	for(int i=1;i<n;i++){
		s_sum-=arr[i-1];
		if(p_sum>arr[i]){
			ans.push_front((s_sum-arr[i])+p_sum);
		}else{
			ans.push_front(s_sum);
		}
		p_sum=max(p_sum,arr[i]);
	}
	for(auto&v:ans) cout<<v<<" ";
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
