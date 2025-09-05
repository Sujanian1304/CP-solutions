/*
 * Problem: C. Turtle Fingers: Count the Values of k
 * URL: https://codeforces.com/contest/1933/problem/C
 * Time Limit: 5.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,n;
    cin>>a>>b>>n;
    int x=0;int y=n;
    while(y%a==0){
		x++;
		y/=a;
	}
	int z=0;y=n;
	while(y%b==0){
		z++;
		y/=b;
	}
	//cout<<x<<z;
	int cnt=0;
	if(a!=b){
		set<int> st;
	for(int i=0;i<=x;i++){
		for(int j=0;j<=z;j++){
			st.insert(pow(a,i)*pow(b,j));
		}
	}
	for(auto&v:st) if(n%v==0) cnt++;
	cout<<cnt<<"\n";
}else{
	cout<<x+1<<"\n";
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
