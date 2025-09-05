/*
 * Problem: D. Skibidi Table
 * URL: https://codeforces.com/contest/2093/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
int cellVal(int n, int r, int c) {
    if (n == 1) {
        if (r == 1 && c == 1) return 1;
        if (r == 2 && c == 2) return 2;
        if (r == 2 && c == 1) return 3;
        if (r == 1 && c == 2) return 4;
    }
    int L = 1 << (n - 1);
    int A = 1LL << (2 * n - 2);
    
    if (r <= L && c <= L) {
        return cellVal(n - 1, r, c);
    } else if (r > L && c > L) {
        return A + cellVal(n - 1, r - L, c - L);
    } else if (r > L && c <= L) {
        return 2 * A + cellVal(n - 1, r - L, c);
    } else {
        return 3 * A + cellVal(n - 1, r, c - L);
    }
}

pair<int, int> cellPos(int n, int d) {
    if (n == 1) {
        if (d == 1) return {1, 1};
        if (d == 2) return {2, 2};
        if (d == 3) return {2, 1};
        if (d == 4) return {1, 2};
    }
    int L = 1 << (n - 1);
    int A = 1LL << (2 * n - 2);
    int q = (d - 1) / A;
    int new_d = d - q * A;
    pair<int, int> sub = cellPos(n - 1, new_d);
    int r = sub.F, c = sub.S;
    
    if (q == 0) {
        return {r, c};
    } else if (q == 1) {
        return {r + L, c + L};
    } else if (q == 2) {
        return {r + L, c};
    } else {
        return {r, c + L};
    }
}

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    while(m--){
		string a;
		cin>>a;
		if(a=="->"){
			int b,c;cin>>b>>c;
			int x=cellVal(n,b,c);
			cout<<x<<"\n";
		}else if(a == "<-") {
                int d;
                cin >> d;
                pair<int, int> coords = cellPos(n, d);
                cout << coords.F << " " << coords.S << "\n";
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
