/*
 * Problem: B. Parity and Sum
 * URL: https://codeforces.com/contest/1993/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int mod=0;vector<int> ear;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2) mod=max(mod,arr[i]);
		else ear.push_back(arr[i]);
	}
	
	if(mod==0||ear.size()==0) cout<<"0\n";
	else{
		bool flag=1;
		sort(ear.begin(),ear.end(),[](int a,int b){return a<b;});
		int s=ear.size();
		//for(auto&v:ear) cout<<v<<" ";
		for(int i=0;i<s;i++){
			if(mod>ear[i]){
				mod+=ear[i];
			}else{
				flag=0;break;
			}
		}
		if(flag) cout<<s<<"\n";
		else cout<<s+1<<"\n";
	}
	
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
