/*
 * Problem: C. Vlad and a Sum of Sum of Digits
 * URL: https://codeforces.com/contest/1926/problem/C
 * Time Limit: 0.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr(2*1e5+1);
void solve() {
    // Your solution here
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    arr[0]=0;
    for(int i=1;i<=2*1e5;i++){
		int x=i;int sum=0;
		while(x>0){
			sum+=x%10;
			x/=10;
		}
		arr[i]=sum+arr[i-1];
		//cout<<arr[i]<<" ";
	}
    while (t--) {
       int n;cin>>n;
    int ans=arr[n];
    cout<<ans<<"\n";
    }
    
    return 0;
}
