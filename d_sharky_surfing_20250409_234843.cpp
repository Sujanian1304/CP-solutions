/*
 * Problem: D. Sharky Surfing
 * URL: https://codeforces.com/contest/2037/problem/D
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,l;cin>>n>>m>>l;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	vector<pair<int,int>> brr(m);vector<int> brr1(m);
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		brr[i].first=a;brr[i].second=b;
		brr1[i]=a;
	}int cnt=0;int sum=1;multiset<int>s;int last=0;
	for(int i=0;i<n;i++){
		int x=upper_bound(brr1.begin(),brr1.end(),arr[i].first)-brr1.begin();
		//cout<<x<<" "<<brr[x-1].second<<" ";
		for(int j=x-1;j>=last;j--){
			s.insert(brr[j].second);
		}
		while(sum<=arr[i].second-arr[i].first+1){
			if(s.empty()){
				cout<<"-1\n";
				return;
			}
			sum+=*prev(s.end());
			s.erase(prev(s.end()));
			cnt++;
		}
		last=x;
		if(sum<=(arr[i].second-arr[i].first)+1) {cout<<"-1\n";return;}
	}
	cout<<cnt<<"\n";	
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
