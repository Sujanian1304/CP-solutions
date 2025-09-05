/*
 * Problem: C. Make Equal Again
 * URL: https://codeforces.com/problemset/problem/1931/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n];map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}int ans=0;
	auto m=max_element(mp.begin(),mp.end(),[](const auto& p1,const auto& p2){return p1.second<p2.second;});
	int el=m->first;
//	cout<<m->first;
	int lo=0;int hi=n-1;
	while(lo<=hi){
		if(arr[lo]==arr[hi]&&arr[lo]==el) {lo++;hi--;}
		else{
			while(arr[lo]==el) lo++;
			while(arr[hi]==el) hi--;
			ans=hi-lo+1;
			break;
		}
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
