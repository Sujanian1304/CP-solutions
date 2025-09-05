/*
 * Problem: D - 756
 * URL: https://atcoder.jp/contests/abc114/tasks/abc114_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> p(1010,1);
vector<int> primes;
void pre(){
p[0]=p[1]=0;
for(int i=2;i<1010;i++){
	if(p[i]==1){
		for(int j=2*i;j<1010;j+=i){
			p[j]=0;
		}
	}
}
for(int i=0;i<1010;i++){
	if(p[i]==1){
		primes.push_back(i);
	}
}
}
int binpow(int n,int x){
	int a=0;int y=1;
	while(y<=n){
		y*=x;
		a++;
	}
	return --a;
}
int pow(int x,int j){
	int y=1;
	while(j--){
		y*=x;
	}
	return y;
}
int mod=1e9+7;
void solve() {
    // Your solution here
    int n;cin>>n;
    map<int,int> mp;int y=1;
    for(int i=0;i<(int)primes.size();i++){
		int x=primes[i];
		if(x>n) break;
		int k=binpow(n,x);int sum=0;
		//cout<<x<<" "<<k<<" ";
		for(int j=1;j<=k;j++){
			int s=pow(x,j);
			sum+=n/s;
		}
		y=(y*(sum+1))%mod;
	}
	cout<<y<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    pre();
    while (t--) {
        solve();
    }ric
    
    return 0;
}
