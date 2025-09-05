/*
 * Problem: A. Red Versus Blue
 * URL: https://codeforces.com/problemset/problem/1659/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c;cin>>a>>b>>c;
    deque<char> s;
    int z=b%(c+1);
    int x=(b+c-z)/(c+1);int i=0;
    while(c!=0){
		if(i%x==0&&i!=0) {if(z>0){s.push_back('R');z--;b--;}s.push_back('B');c--;i=0;}
		else {if(b>0){s.push_back('R');b--;i++;}
		 else if(b==0) {if(c>x) {int y=c/2;while(y--) {s.push_front('B');};if(y%2){y=c/2+1;while(y--) {s.push_back('B');}}else {y=c/2;while(y--) {s.push_back('B');}}}else{while(c--) s.push_back('B');} break;}
	 }
	}
	while(b!=0){
		s.push_back('R');
		b--;
	}
	for(auto&v:s) cout<<v;
	cout<<"\n";
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
