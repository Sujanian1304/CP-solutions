/*
 * Problem: B. XOR = Average
 * URL: https://codeforces.com/contest/1758/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2){
		while(n--){
			cout<<1<<" ";
		}
		cout<<"\n";
	}else{
		if(n>2){
		int a=1;int b=0;
		while(true){
			int x=(n-2)*((a+n-2+1)/(n-2));
			int y=x-a;
			if((y^a)==(y+a)){b=y;break;}
			a++;
		}
		int s=((a+b)/(n-2))*(n-1);
		for(int i=0;i<n-2;i++){
			cout<<s<<" ";
		}
		cout<<a<<" "<<b<<"\n";
	}else{
		cout<<1<<" "<<3<<"\n";
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
