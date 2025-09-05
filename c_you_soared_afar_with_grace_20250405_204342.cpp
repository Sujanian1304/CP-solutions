/*
 * Problem: C. You Soared Afar With Grace
 * URL: https://codeforces.com/contest/2084/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
void sol(const vector<int>& target, vector<pair<int,int>>& ops) {
    int n = target.size();
    vector<int> current(n);
    for (int i = 0; i < n; i++) {
        current[i] = i+1;
    }
    vector<int> pos(n+1);
    for (int i = 0; i < n; i++) {
        pos[current[i]] = i;
    }
    
    for (int i = 0; i < n; i++) {
        if (current[i] != target[i]) {
            int j = pos[target[i]]; 
            swap(current[i], current[j]);
            pos[current[i]] = i;
            pos[current[j]] = j;
            ops.push_back({i+1, j+1});
        }
    }
}
void solve() {
    // Your solution here
    int n;cin>>n;
   vector<int> arr(n+1), brr(n+1);
        for (int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++){
            cin >> brr[i];
        }
        map<pair<int,int>, vector<int>> mp;
        for (int i = 1; i <= n; i++){
            mp[{arr[i], brr[i]}].push_back(i);
        }
          vector<int> T(n+1, 0);
           int l = 1, r = n;
          bool possible = true;
          for(auto &a : mp) {
               auto key = a.F;
              int x = key.F, y = key.S;
             if(x == y || x > y) continue;
              auto it = mp.find({y, x});
              if(it == mp.end() || a.S.size() != it->S.size()) { possible = false; break; }
             while(!a.S.empty() && !it->S.empty()) {
             if(l >= r) { possible = false; break; }
             T[l++] = a.S.back(); a.S.pop_back();
             T[r--] = it->S.back(); it->S.pop_back();
        }
    }
     if(!possible) { cout << -1 << "\n"; return; }
      for(auto &a : mp) {
        if(a.F.F != a.F.S) continue;
        while(a.S.size() >= 2 && l < r) {
        T[l++] = a.S.back(); a.S.pop_back();
        T[r--] = a.S.back(); a.S.pop_back();
      }
  }
    if(n % 2 == 1) {
       bool center = false;
       for(auto &a: mp)
          if(a.F.F == a.F.S && !a.S.empty()){
              T[(n+1)/2] = a.S.back(); a.S.pop_back();
              center = true; break;
        }
    if(!center) possible = false;
}
   for(int i = 1; i <= n; i++) {
        if(T[i] == 0) { possible = false; break; }
}
    if(!possible) { cout << -1 << "\n"; return; }
     vector<pair<int,int>> ops;
        vector<int> target(n);
        for (int i = 1; i <= n; i++){
            target[i-1] = T[i];
        }
 
        sol(target, ops);
        cout << ops.size() << "\n";
        for (auto &op : ops) {
            cout << op.first << " " << op.second << "\n";
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
