/*
 * Problem: D. Come a Little Closer
 * URL: https://codeforces.com/contest/2114/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	int f_min1=LLONG_MAX,s_min1=LLONG_MAX;
    int f_max1=LLONG_MIN,s_max1=LLONG_MIN;
    for(int i=0;i<n;i++){
        int x=a[i];
        if(x<f_min1){s_min1=f_min1;f_min1=x; }
        else if(x<s_min1){s_min1=x;}
        if(x>f_max1){s_max1=f_max1;f_max1=x; }
        else if(x>s_max1){s_max1=x;}
    }
    int f_min2=LLONG_MAX,s_min2=LLONG_MAX;
    int f_max2=LLONG_MIN,s_max2=LLONG_MIN;
    for(int i=0;i<n;i++){
        int y=b[i];
        if(y<f_min2){s_min2=f_min2;f_min2=y;}
        else if(y<s_min2){s_min2=y;}
        if(y>f_max2){s_max2=f_max2;f_max2=y;}
        else if(y>s_max2){s_max2=y;}
    }
    int best=(f_max1-f_min1+1)*(f_max2-f_min2+1);
    for(int i=0;i<n;i++){
        int amn=(a[i]==f_min1?s_min1:f_min1);
        int amx=(a[i]==f_max1?s_max1:f_max1);
        int bmn=(b[i]==f_min2?s_min2:f_min2);
        int bmx=(b[i]==f_max2?s_max2:f_max2);
        int W=amx-amn+1;
        int H=bmx-bmn+1;
        int cells=W*H;
        int cost;
        if(cells>n-1) {
            cost=cells;
        } else {
            cost=min((W+1)*H,W*(H+1));
        }
        best=min(best,cost);
    }

    cout << best << "\n";
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
