/*
 * Problem: D. Friends and the Restaurant
 * URL: https://codeforces.com/problemset/problem/1729/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int m;cin>>m;
    deque<int> arr(m),brr(m);
    for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		cin>>brr[i];
	}
	deque<int> p,n;int e=0;
	for(int i=0;i<m;i++){
		if(arr[i]-brr[i]<0) n.push_back(arr[i]-brr[i]);
		else if(arr[i]-brr[i]>0) p.push_back(arr[i]-brr[i]);
		else e++;
	}
	int g=0;
	sort(n.begin(),n.end());
	sort(p.begin(),p.end());
    while(p.size()>0&&n.size()>0){
		if(p.back()<=abs(n.front())) {g++;p.pop_back();n.pop_front();}
		else p.pop_back();
	}
	if(n.size()>0) g+=(n.size()+e)/2;
	else g+=e/2;
	cout<<g<<"\n";
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
