/*
 * Problem: A. Fashionable Array
 * URL: https://codeforces.com/contest/2110/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a.begin(),a.end());
    if((a[0]+a.back())%2==0){cout<<"0\n";return;}
    int ans=1e9;
    if(a[0]%2){
		int x=n-1;
		while(x>0){
			if(a[x]%2){ans=min(n-1-x,ans);break;}
			x--;
		}
	}else if(a[0]%2==0){
		int x=n-1;
		while(x>0){
			if(a[x]%2==0){ans=min(n-1-x,ans);break;}
			x--;
		}
	}
	if(a[n-1]%2){
		int x=0;
		while(x<n){
			if(a[x]%2){ans=min(x,ans);break;}
			x++;
		}
	}else if(a[n-1]%2==0){
		int x=0;
		while(x<n){
			if(a[x]%2==0){ans=min(x,ans);break;}
			x++;
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
