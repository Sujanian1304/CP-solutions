/*
 * Problem: D. Dima and Lisa
 * URL: https://codeforces.com/problemset/problem/584/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int x=n-2;
    bool flag=0;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){flag=1;break;}
		}
		if(flag==0){cout<<"1\n";cout<<n<<"\n";return;}
		 flag=0;
		for(int i=2;i*i<=x;i++){
			if(x%i==0){flag=1;break;}
		}
		if(flag==0){cout<<"2\n";cout<<2<<" "<<x<<"\n";return;}
    while(x>0){
		bool flag=0;
		for(int i=2;i*i<=x;i++){
			if(x%i==0){flag=1;break;}
		}
		if(flag==0){break;}
		x--;
	}
	int y=n-x;
	vector<bool> p(310,1);
	vector<int> primes;
	p[0]=p[1]=0;
	for(int i=2;i<310;i++){
		if(p[i]==1){
			for(int j=2*i;j<310;j+=i){
				p[j]=0;
			}
		}
	}
	for(int i=0;i<310;i++){
		if(p[i]==1) primes.push_back(i);
	}
	for(int i=0;i<(int)primes.size();i++){
		auto it=lower_bound(primes.begin(),primes.end(),y-primes[i])-primes.begin();
		if(primes[it]==y-primes[i]){
			cout<<3<<"\n";
			cout<<primes[it]<<" "<<primes[i]<<" "<<x;
			return;
		}
	}
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    //pre();
    while (t--) {
        solve();
    }
    
    return 0;
}
