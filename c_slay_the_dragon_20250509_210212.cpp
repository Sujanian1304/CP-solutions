/*
 * Problem: C. Slay the Dragon
 * URL: https://codeforces.com/problemset/problem/1574/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);int sum=0;
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
    sort(a.begin(),a.end());
    int m;cin>>m;
    for(int i=0;i<m;i++){
		int b,c;cin>>b>>c;int cnt=0;
		auto y=lower_bound(a.begin(),a.end(),b)-a.begin();
		if(y==n){
			cnt+=b-a[--y];
			int rem=sum-a[y];
			if(rem<c) cnt+=c-rem;
		}
		else{
			int cnt1=0;
			int rem=sum-a[y];
			if(rem<c) cnt1+=c-rem;
			if(y>0){
			int cnt2=0;
			cnt2=b-a[--y];
			rem=sum-a[y];
			if(rem<c) cnt2+=c-rem;
			cnt=min(cnt1,cnt2);
		   }else{
			cnt=cnt1;
		}
		}
		cout<<cnt<<"\n";
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
