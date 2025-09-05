/*
 * Problem: C - Even Digits
 * URL: https://atcoder.jp/contests/abc336/tasks/abc336_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
	if(b==0) return 1;
	else if(b%2) return a*binpow(a,b-1);
	else{
		int ans=binpow(a,b/2);
		return ans*ans;
	}
}
void solve() {
    // Your solution here
    int n;cin>>n;n--;*
    vector<int> arr;
    while(n!=0){
		arr.push_back(n%5);
		n/=5;
	}
	//reverse(arr.begin(),arr.end());
	int ans=0;
	for(int i=0;i<arr.size();i++){
		ans+=arr[i]*binpow(10,i);
	}
	cout<<ans*2<<"\n";
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
