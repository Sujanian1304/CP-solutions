/*
 * Problem: B. Diverse Substrings
 * URL: https://codeforces.com/contest/1748/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
		int dis=1;
		vector<int> freq(10,0);cnt++;
		freq[s[i]-48]++;
		for(int j=i+1;j<min(i+100,n);j++){
			freq[s[j]-48]++;
			int x=*max_element(freq.begin(),freq.end());
			int cnt1=0;
			for(int k=0;k<10;k++){if(freq[k]>0) cnt1++;}
			dis=cnt1;
			if(x>dis) continue;
			cnt++;
		}
		//cout<<cnt<<" ";
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
