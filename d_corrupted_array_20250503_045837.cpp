/*
 * Problem: D. Corrupted Array
 * URL: https://codeforces.com/problemset/problem/1512/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;n+=2;
    vector<int> a(n);int ma=0;int sum=0;
    for(int i=0;i<n;i++) {cin>>a[i];ma=max(ma,a[i]);sum+=a[i];}
    sort(a.begin(),a.end());sum-=ma;
    int ans=-1;
    for(int i=0;i<n-1;i++){if(sum-a[i]==ma){ans=i;break;}}
    if(ans==-1){
		if(sum-a[n-2]==a[n-2]){for(int i=0;i<n-2;i++) cout<<a[i]<<" ";}
		else cout<<"-1\n";
		return;}
    for(int i=0;i<n-1;i++){if(i!=ans) cout<<a[i]<<" ";}
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
