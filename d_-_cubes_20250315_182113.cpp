/*
 * Problem: D - Cubes
 * URL: https://atcoder.jp/contests/abc397/tasks/abc397_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

int binpow(int a, int b) {
    if(b == 0) return 1;
    else if(b % 2) return a * binpow(a, b-1);
    else {
        int ans = binpow(a, b/2);
        return ans * ans;
    }
}

int sol(int a,int b,int c){
	int lo=0;int hi=1e9;int ans=-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(a*mid*mid+b*mid+c<0){
			lo=mid+1;
		}
		else{
			ans=mid;
			hi=mid-1;
		}
	}
	if(ans!=-1){
		if(a*ans*ans+b*ans+c==0) return ans;
	}
	return -1;

}

void solve() {
    int n; cin >> n;
    for(int i=1;i*i*i<=n;i++){
		if(n%i) continue;
		else{
			int m=n/i;
			int k=sol(3,3*i,i*i-m);
			if(k>0) {cout<<k+i<<" "<<k;return ;}
			
		}
	}
	cout<<"-1";
    
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
