/*
 * Problem: A. Two Substrings
 * URL: https://codeforces.com/problemset/problem/550/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;bool flag=0;int n=s.size();vector<int> a(3);
     for(int i=0;i<n-2;i++){
		 if((s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')||(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')){
			 a[0]=i;a[1]=i+1;a[2]=i+2;flag=1;break;
		 }
	 }
	 if(flag){
		 for(int i=0;i<n-1;i++){
			 if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='B'&&s[i+1]=='A')){
				 if(i!=a[0]&&i!=a[1]&&i!=a[2]){ cout<<"YES\n";return;}
			 }
		 }
		 cout<<"NO\n";
	 }else{
		 int x=-1;int y=-1;
		 for(int i=0;i<n-1;i++){
			 if(s[i]=='A'&&s[i+1]=='B'){
				 flag=1;x=i;y=i+1;break;
			 }
		 }
		 if(flag){
			 for(int i=0;i<n-1;i++){
			 if(s[i]=='B'&&s[i+1]=='A'){
				if(i!=y){cout<<"YES\n";return;}
			 }
		 }
	 }
	 cout<<"NO\n";
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
