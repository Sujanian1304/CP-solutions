/*
 * Problem: B. Lucky Numbers (easy)
 * URL: https://codeforces.com/problemset/problem/96/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;int x=n;
    while(x>0){
		arr.push_back(x%10);
		x=x/10;
	}
	int z=arr.size();
	reverse(arr.begin(),arr.end());
	if(z%2){
		for(int i=0;i<=z;i++){
			if(i<(z+1)/2) cout<<"4";
			else cout<<"7";
		}
	}else{
		if(arr[0]>4){
			if(arr[0]<=7&&arr[1]<7){
			cout<<"7";
			int y=arr.size()/2;
			while(y--){
				cout<<"4";
			}
			y=arr.size()/2-1;
			while(y--){
				cout<<"7";
			}
		}
		else{
			for(int i=0;i<=z+1;i++){
			if(i<(z+2)/2) cout<<"4";
			else cout<<"7";
		}
	}
		}else if(arr[0]<4){
			for(int i=0;i<z;i++){
			if(i<(z/2)) cout<<"4";
			else cout<<"7";
		}
	
	}
		else{
			cout<<"4";
			if(arr[1]>4) {cout<<"7";
				int y=(z-2)/2;
				while(y--){
					cout<<"4";
				}
				y=(z-2)/2;
				while(y--){
					cout<<"7";
				}
			}
			else {cout<<"4";
				int y=(z)/2-2;
				while(y--){
					cout<<"4";
				}
				y=(z)/2;
				while(y--){
					cout<<"7";
				}
			}
		}
	}
	cout<<"\n";		
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
