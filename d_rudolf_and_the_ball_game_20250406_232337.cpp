/*
 * Problem: D. Rudolf and the Ball Game
 * URL: https://codeforces.com/contest/1941/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int l,b,c;cin>>l>>b>>c;
    deque<int> a;set<int> y;
    a.push_back(c);
    for(int i=0;i<b;i++){
	   int n;char d;
	   cin>>n>>d;
	   if(d=='?'){
		   while(!a.empty()){
			   int x=a.front();
			   a.pop_front();
		       if(x+n>l){y.insert((x+n)-l);}
		       else{y.insert(x+n);}
		       if(x-n<1){y.insert((l-(n-x)));}
		       else {y.insert(x-n);}
		   }
		   for(auto&v:y) a.push_back(v);
		   y.clear();
		   //for(auto&v:a) cout<<v<<" "; 
		   //cout<<"\n";
	   }
	   else if(d=='1'){
		    while(!a.empty()){
			   int x=a.front();
			   a.pop_front();
		       if(x-n<1){y.insert((l-(n-x)));}
		       else {y.insert(x-n);}
		   }
		   for(auto&v:y) a.push_back(v);
		   y.clear();
	   }
	   else{
		    while(!a.empty()){
			   int x=a.front();
			   a.pop_front();
		       if(x+n>l){y.insert((x+n)-l);}
		       else{y.insert(x+n);}
		   }
		   for(auto&v:y) a.push_back(v);
		   y.clear();
	   }
   }
   set<int> st;
   for(auto&v:a) st.insert(v);
   cout<<st.size()<<"\n";
   for(auto&v:st) cout<<v<<" ";
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
