/*
 * Problem: B. Binomial Coefficients, Kind Of
 * URL: https://codeforces.com/contest/2025/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
int binpow(int a,int b){
	if(b==0) return 1;
	else if(b%2) return a*binpow(a,b-1)%mod;
	else{
		int ans=(binpow(a,b/2))%mod;
		return (ans*ans)%mod;
	}
}
void solve() {
    // Your solution here
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
   int arr[t];
   for(int i=0;i<t;i++){cin>>arr[i];}
   int arr1[t];
   for(int i=0;i<t;i++){cin>>arr1[i];}
   for(int i=0;i<t;i++){
	   int x=binpow(2,arr1[i])%mod;
	   cout<<x<<"\n";
   }
    
    return 0;
}
