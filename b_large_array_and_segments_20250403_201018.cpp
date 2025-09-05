/*
 * Problem: B. Large Array and Segments
 * URL: https://codeforces.com/contest/2086/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
int n, k, x;
vector<int> arr;
vector<int> p;		
void solve() {
    // Your solution here
       
        cin >> n >> k >> x;
        arr.resize(n);p.resize(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int sum=0;
     for(int i=0;i<n;i++){
		 sum+=arr[i];
		 if(i==0) p[i]=arr[i];
		 else p[i]=p[i-1]+arr[i];
	 }
	 if(x>k*sum) {cout<<"0\n"; return;}
	 int cnt=0;int y=0;
	 if(x%sum==0) {cnt=((x/sum)-1)*n;y=sum;}
	 else{
	 cnt=(x/sum)*n;
	 y=x%sum;
 }
	 int ans=0;
	 for(int i=n-1;i>=0;i--){
		 ans+=arr[i];
		 if(ans>=y) break;
		 cnt++;
	 }
	 //cnt+=n-ans;
	 cout<<n*k-cnt<<"\n";
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
