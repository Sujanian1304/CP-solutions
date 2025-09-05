/*
 * Problem: B. Corner Twist
 * URL: https://codeforces.com/contest/1983/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    vector<string> ar(a);vector<string> br(a);
    for(int i=0;i<a;i++){
		string t;cin>>t;
		ar[i]=t;
	}
	for(int i=0;i<a;i++){
		string t;cin>>t;
		br[i]=t;
	}
	vector<vector<int>> arr(a,vector<int>(b)),brr(a,vector<int>(b));
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			arr[i][j]=ar[i][j]-48;
		}
	}
		for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			brr[i][j]=br[i][j]-48;
		}
	}	
	for(int i=0;i<a-1;i++){
		for(int j=0;j<b-1;j++){
			while(arr[i][j]!=brr[i][j]){
				arr[i][j]=(arr[i][j]+1)%3;arr[i+1][j+1]=(arr[i+1][j+1]+1)%3;
				arr[i+1][j]=(arr[i+1][j]+2)%3;arr[i][j+1]=(arr[i][j+1]+2)%3;
			}
		}
	}
	
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(arr[i][j]!=brr[i][j]) {cout<<"NO\n"; return;}
			}
		}
		cout<<"YES\n";
			
			
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
