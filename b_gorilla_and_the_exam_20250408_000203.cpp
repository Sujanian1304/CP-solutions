/*
 * Problem: B. Gorilla and the Exam
 * URL: https://codeforces.com/contest/2057/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
   //	sort(arr.begin(),arr.end());
   vector<int> brr;
   for(auto&v:mp) brr.push_back(v.second);
   sort(brr.begin(),brr.end());
	if(m==n) cout<<"1\n";
	else if(m==0) cout<<mp.size()<<"\n";
	else{
		int cnt=0;
		for(auto&v:brr) {
			if(m>=v){ m-=v;cnt++;}
			else break;}
			
		cout<<brr.size()-cnt<<"\n";
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
