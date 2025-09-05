/*
 * Problem: B. Removals Game
 * URL: https://codeforces.com/problemset/problem/2002/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr1(n),arr2(n);
    for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	if(n==2)cout<<"Bob\n";
	else if(n==3){if(arr1==arr2||(arr1[0]==arr2[2]&&arr1[2]==arr2[0])) cout<<"Bob\n";
		else cout<<"Alice\n";
	}else{
		if(arr1==arr2) cout<<"Bob\n";
		else{
			reverse(arr2.begin(),arr2.end());
			if(arr1==arr2) cout<<"Bob\n";
			else cout<<"Alice\n";
		}
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
