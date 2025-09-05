/*
 * Problem: A. Olympiad Date
 * URL: https://codeforces.com/contest/2091/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int cnt0=0;int cnt1=0;int cnt2=0;int cnt3=0;int cnt5=0;int ans=0;bool flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0&&cnt0<3) cnt0++;
		else if(arr[i]==1&&cnt1<1) cnt1++;
		else if(arr[i]==2&&cnt2<2) cnt2++;
		else if(arr[i]==5&&cnt5<1) cnt5++;
		else if(arr[i]==3&&cnt3<1) cnt3++;
		if(cnt0==3&&cnt1==1&&cnt2==2&&cnt3==1&&cnt5==1) { flag=1;ans=i;break;}
	}
	if(ans==0)cout<<ans<<"\n";
	else cout<<ans+1<<"\n";
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
