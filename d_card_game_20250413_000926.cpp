/*
 * Problem: D. Card Game
 * URL: https://codeforces.com/contest/1932/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    char s;cin>>s;
    vector<string> arr(2*n);map<char,vector<int>> mp;vector<int> trump;
    for(int i=0;i<2*n;i++){
		cin>>arr[i];
		//cout<<arr[i][1]<<" ";
		if(arr[i][1]==s) trump.push_back(i);
		else mp[arr[i][1]].push_back(i);
	}
	bool flag=0;vector<pair<string,string>> ans;
	for(auto&v:mp){
		if(v.second.size()%2){
			if(trump.size()==0){ cout<<"IMPOSSIBLE\n";flag=1;break;}
		    else{
				string x=arr[trump.back()];trump.pop_back();
				string y=arr[v.second.back()];v.second.pop_back();
				ans.push_back({y,x});
				while(v.second.size()!=0){
					string x=arr[v.second.back()];
					v.second.pop_back();
					string y=arr[v.second.back()];
					v.second.pop_back();
					if(x[0]-48>y[0]-48) swap(x,y);
					ans.push_back({x,y});
				}
			}
		}
	}
	if(!flag){
		for(auto&v:mp){
			if(v.second.size()%2==0 &&v.second.size()!=0){
			while(v.second.size()!=0){
					string x=arr[v.second.back()];
					v.second.pop_back();
					string y=arr[v.second.back()];
					v.second.pop_back();
					if(x[0]-48>y[0]-48) swap(x,y);
					ans.push_back({x,y});
				}
			}
		}
	}
	if(trump.size()%2) {cout<<"IMPOSSIBLE\n";flag=1;}
	else{
		while(trump.size()!=0){
			string x=arr[trump.back()];trump.pop_back();
			string y=arr[trump.back()];trump.pop_back();
			if(x[0]-48>y[0]-48) swap(x,y);
			ans.push_back({x,y});
		}
	}
	if(!flag){
		for(auto&v:ans){
			cout<<v.first<<" "<<v.second<<"\n";
		}
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
