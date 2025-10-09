/*
 * Problem: C2. The Cunning Seller (hard version)
 * URL: https://codeforces.com/contest/2132/problem/C2
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */


#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculatex(int n){
	long double k=logl(n+1)/logl(3);
	int exp=ceil(k);
	return exp-1;
}

int binpow(int a, int b){
    int res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    if(n<=k){cout<<3*n<<"\n";return;}
    vector<int> base3;
    int temp=n;
    int min_c=0;
    while(temp>0){
		base3.push_back(temp%3);
		min_c+=temp%3;
		temp/=3;
	}
	if(min_c>k){cout<<"-1\n";return;}
	int rem=(k-min_c);
	rem/=2;
	for(int i=(int)base3.size()-1;i>0;i--){
		if(base3[i]<=rem){
			base3[i-1]+=3*base3[i];
			rem-=base3[i];
			base3[i]=0;
		}else{
			base3[i-1]+=3*rem;
			base3[i]-=rem;
			break;
		}
	}
	int coins=0;
	int x=base3.size();
	for(int i=0;i<(int)base3.size();i++){
		coins+=(base3[i])*(binpow(3,i+1)+i*binpow(3,max(0LL,i-1)));
	}
	cout<<coins<<"\n";
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
