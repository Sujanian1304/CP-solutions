/*
 * Problem: A. Cows and Primitive Roots
 * URL: https://codeforces.com/problemset/problem/284/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
int pow(int a,int b,int n){
	 if(b==0) return 1;
	 if(b==1) return a;
	 if(b%2){ int x=pow(a,b-1,n); return (a*x)%n;}
	 else{
		 int ans=pow(a,b/2,n);
		 return (ans*ans)%n;
	 }
 }
void solve() {
    // Your solution here
    int n;cin>>n;
    int cnt=0;
    for(int i=1;i<n;i++){
		int x=i;bool f=1;
		for(int j=1;j<=n-2;j++){
			int y=pow(x,j,n)-1;
			if(y%n==0){f=0;break;}
		}
		if(f==1){
			int y=pow(x,n-1,n)-1;
			if(y%n==0){cnt++;}
		}
	}
	cout<<cnt<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
