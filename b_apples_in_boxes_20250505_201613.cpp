/*
 * Problem: B. Apples in Boxes
 * URL: https://codeforces.com/contest/2107/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    vector<int> a(n);set<int> st;int sum=0;
    for(int i=0;i<n;i++){
		cin>>a[i];
		st.insert(a[i]);
		sum+=a[i];
	}
	int Ma= *max_element(a.begin(), a.end());
    int mi= *min_element(a.begin(), a.end());
    int dif= Ma- mi;
    int cnt=0;
    for(auto&v:a){if(v==Ma) cnt++;}
    if (dif>k+1||(dif==k+1&&cnt>1)) 
       cout << "Jerry\n";
    else {
		if(sum%2){cout<<"Tom\n";}
		else cout<<"Jerry\n";
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
