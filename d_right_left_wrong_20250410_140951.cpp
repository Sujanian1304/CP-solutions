/*
 * Problem: D. Right Left Wrong
 * URL: https://codeforces.com/contest/2000/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);vector<int> p(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i==0)p[i]=arr[i];
		else p[i]=p[i-1]+arr[i];
	}
	string s;cin>>s;
	vector<int> one,two;
	for(int i=0;i<n;i++){
		if(s[i]=='L') one.push_back(i);
		else two.push_back(i);
	}
	if(one.size()==0||two.size()==0) {cout<<"0\n"; return;}
	reverse(two.begin(),two.end());
	int sum=0;
	if(one[0]>two[0]){cout<<"0\n"; return;}
	for(int i=0;i<min(one.size(),two.size());i++){
		if(two[i]<one[i]) continue;
		sum+=(p[two[i]]-((one[i]==0)?0:p[one[i]-1]));
	}
	cout<<sum<<"\n";
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
