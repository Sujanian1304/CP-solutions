/*
 * Problem: B. DZY Loves Strings
 * URL: https://codeforces.com/problemset/problem/447/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;int n=s.size();
    int a;cin>>a;
    vector<int> arr(26);
    int ma=0;int ans=-1;
    for(int i=0;i<26;i++){
		cin>>arr[i];
		if(arr[i]>ma){
			ma=arr[i];
			ans=i;
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		//cout<<s[i]-48;
		//cout<<arr[(s[i]-'a')];
		sum+=(arr[s[i]-'a']*(i+1));
	}
	sum+=arr[ans]*((((n+a)*(n+a+1))/2)-((n*(n+1))/2));
	
	cout<<sum<<"\n";
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
