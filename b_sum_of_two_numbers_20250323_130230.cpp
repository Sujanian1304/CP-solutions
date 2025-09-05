/*
 * Problem: B. Sum of Two Numbers
 * URL: https://codeforces.com/problemset/problem/1788/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2){
		int x=n%10;
		if(x==9){
		     deque<int> s,t;
		     int i=0;
		     while(n!=0){
				 if(n==1){
					 s.push_front(1);
					 while(t.front()==0) t.pop_front();
					 break;
				 }
				 int z=n%10;
				 if(z&1LL){
					 if(i%2){
				 s.push_front(z/2+1);
				 t.push_front(z/2);
			 }
			 else{
				 s.push_front(z/2);
				 t.push_front(z/2+1);
			 }
			 i++;
		 }
			 else{
				  s.push_front(z/2);
				 t.push_front(z/2);
			 }
			 n=n/10;
		 }
		 for(auto&v:s) cout<<v;
		 cout<<" ";
		 for(auto&v:t) cout<<v;
		 cout<<"\n";
	 }else{
		cout<<n/2<<" "<<n/2+1<<"\n";
	}
	}
	else {
		cout<<n/2<<" "<<n/2<<"\n";
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
