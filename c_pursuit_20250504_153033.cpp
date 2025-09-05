/*
 * Problem: C. Pursuit
 * URL: https://codeforces.com/problemset/problem/1530/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int check(int x,vector<int>& a,vector<int>& b){
	int n=a.size();int l=(n+x)/4;
	int  y=accumulate(a.begin()+l,a.end(),0LL);
	y+=x*(100);
	int z=accumulate(b.begin()+((x<=l)?l-x:0),b.end(),0LL);
	//cout<<x<<" "<<y<<" "<<z<<" ";
	if(y>=z) return 1;
	else return 0;
}
	
void solve() {
    // Your solution here
    int  n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int lo=0;int hi=n+1;int ans=0;
    while(lo<=hi){
		int  mid=lo+(hi-lo)/2;
		if(check(mid,a,b)>=1){
			ans=mid;hi=mid-1;
		}else lo=mid+1;
	}
	cout<<ans<<"\n";
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
