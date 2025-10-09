#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,c,d;cin>>a>>b>>c>>d;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if((x1!=x2&&abs(x1-x2)%c==0)||(y1!=y2&&abs(y1-y2)%d==0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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
