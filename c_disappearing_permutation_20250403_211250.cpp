/*
 * Problem: C. Disappearing Permutation
 * URL: https://codeforces.com/contest/2086/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
struct Node {
    int type;
    int val;
};
 
void solve() {
    // Your solution here
    int n;
        cin >> n;
        vector<int> p(n+1);
        for (int i = 1; i <= n; i++){
            cin >> p[i];
        }
        vector<int> d(n+1);
        for (int i = 1; i <= n; i++){
            cin >> d[i];
        }
        vector<vector<int>> inv(n+1);
        for (int i = 1; i <= n; i++){
            inv[p[i]].push_back(i);
        }
        vector<int> q = p;
        vector<bool> fI(n+1, false), fN(n+1, false);
        int cnt = 0;
        queue<Node> qu;
        for (int qi = 1; qi <= n; qi++){
            int pos = d[qi];
            q[pos] = 0;
            if (!fI[pos]){
                fI[pos] = true;
                cnt++;
                qu.push({0, pos});
            }
            int Num1 = p[pos];
            if (!fN[Num1]){
                fN[Num1] = true;
                qu.push({1, Num1});
            }
            while(!qu.empty()){
                Node cur = qu.front();
                qu.pop();
                if(cur.type == 0){
                    int num = cur.val;
                    if(!fN[num]){
                        fN[num] = true;
                        qu.push({1, num});
                    }
                } else {
                    int num = cur.val;
                    for (int i : inv[num]){
                        if(q[i] != 0 && !fI[i]){
                            fI[i] = true;
                            cnt++;
                            qu.push({0, i});
                        }
                    }
                }
            }
 
            cout << cnt << " ";
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
