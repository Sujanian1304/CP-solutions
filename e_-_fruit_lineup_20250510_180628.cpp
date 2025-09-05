/*
 * Problem: E - Fruit Lineup
 * URL: https://atcoder.jp/contests/abc405/tasks/abc405_e
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD = 998244353;

int64 modexp(int64 a, int64 e=MOD-2){
    int64 r=1;
    while(e){
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}

void solve() {
    // Your solution here
   
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int N = max(A+C+1, C+D) + 5;
    vector<int> inv(N,1);
    for(int i=2;i<N;i++)
        inv[i] = MOD - (int64)(MOD/i)*inv[MOD%i]%MOD;

    int M = max(A+B, C+D-1) + 5;
    vector<int64> fact(M,1), ifact(M,1);
    for(int i=1;i<M;i++)
        fact[i]=fact[i-1]*i%MOD;
    ifact[M-1]=modexp(fact[M-1]);
    for(int i=M-1;i>0;i--)
        ifact[i-1]=ifact[i]*i%MOD;

    auto Cnk=[&](int n,int k){
        if(k<0||k>n) return int64(0);
        return fact[n]*ifact[k]%MOD*ifact[n-k]%MOD;
    };

    int64 t1 = Cnk(A+B,B), t2 = Cnk(C+D-1,D-1), ans=0;
    for(int x=0;x<=C;x++){
        ans = (ans + t1*t2) % MOD;
        t1 = t1 * (A+B+x+1) % MOD * inv[A+x+1] % MOD;
        int64 y = C - x;
        t2 = t2 * y % MOD * inv[y + D - 1] % MOD;
    }

    cout<<ans<<"\n";
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
