/*
 * Problem: D. Plus Minus Permutation
 * URL: https://codeforces.com/contest/1872/problem/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
	if(b==0) return a;
	else{
		return gcd(b,a%b);
	}
}
void solve() {
    // Your solution here
    int n,x,y;
    cin>>n>>x>>y;
    int z=abs(x*y)/gcd(x,y);
    int a=n/x;int b=n/y;
    int c=n/z;
    a-=c;b-=c;
   if(a==0&&b==0) cout<<"0\n";
   else if(a==0) cout<<"-"<<b*(b+1)/2<<"\n"; 
   else if(b==0) {
	   int d=n-(a-1);
	   int sum=(a*(2*d+(a-1)))/2;
	   cout<<sum<<"\n";
   }
   else{
	    int d=n-(a-1);
	   int sum1=(a*(2*d+(a-1)))/2;
	   int sum2=b*(b+1)/2;
	   cout<<sum1-sum2<<"\n";
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
