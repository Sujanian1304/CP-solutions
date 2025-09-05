/*
 * Problem: C. Given Length and Sum of Digits...
 * URL: https://codeforces.com/problemset/problem/489/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool can(int n,int m){
	if(m<0) return 0;
	if(m>n*9) return  0;
	return 1;
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(m==0){*
		if(n==1) cout<<"0 0\n";
		else cout<<"-1 -1\n";
	}else if(m>n*9){ cout<<"-1 -1\n";}
	else{
		int sum=m;string minn="";
		for(int i=0;i<n;i++){
			for(int j=0;j<10;j++){
				if(((i>0)||(j>0)||(i==1&&j==0))&&can(n-i-1,sum-j)){
					minn+=char('0'+j);
					sum-=j;
					break;
				}
			}
		}
		cout<<minn;
		cout<<" ";
			 reverse(minn.begin(),minn.end());
					deque<int> an;int cnt=0;
					for(auto&v:minn) {
						if(v-48>0)
						{if(v=='1'){
							//cout<<an.size()<<" ";
							if(an.size()>0&&an.back()<9) {an.back()++;cnt++;}
							else an.push_back(1);
							}
							
							else an.push_back(v-48);
						}
						else cnt++;}
					//reverse(an.begin(),an.end());
					for(auto&v:an) cout<<v;
					while(cnt!=0) {cout<<0;cnt--;}
					
				cout<<"\n";
	}
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
