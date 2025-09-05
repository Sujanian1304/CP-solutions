/*
 * Problem: C. Dining Hall
 * URL: https://codeforces.com/contest/2090/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[]={1,1,2,2};
int dy[]={1,2,1,2};
void solve() {
    // Your solution here
    int n;cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int z=n/3;
	 vector<vector<vector<pair<int, int>>>> arr(z, vector<vector<pair<int, int>>>(z));
	for(int i=0;i<z;i++){
		for(int j=0;j<z;j++){
			for(int k=0;k<4;k++){
				arr[i][j].push_back({3*i+dx[k],3*j+dy[k]});
			}
		}
	}
	vector<vector<int>> vis(z,vector<int>(z,0));
    int i=0;int j=0;int k=0;
    for(int l=0;l<n;l++){
		if(arr1[l]!=0){
			cout<<arr[i][j][k].first<<" "<<arr[i][j][k].second<<"\n";
			vis[i][j]=1;
			k++;
			if(k==3) {if(i<z) i++;else j++;}
		}
		else{
			while(vis[i][j]!=0&&i<z){
				i++;
			}
			while(vis[i][j]!=0&&j<z){
				j++;
			}
			cout<<arr[i][j][k].first<<" "<<arr[i][j][k].second<<"\n";
			vis[i][j]=1;
		} 
	}
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
