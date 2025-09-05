

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    
    string s;cin>>s;bool flag=1;int n=s.size();map<char,int> mp;
    for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
    for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]) {flag=0;break;}
	}
	if(flag){cout<<"First";}
	else{
			int odd=0;int even=0;
			for(auto&v:mp){
				if(v.second%2) odd++;
				else even++;
			}
			//cout<<odd<<even;
			if(n%2){if(odd==1&&even>=1){cout<<"First";return;}}
			else if(n%2==0){
				if(even>=1&&odd==0){cout<<"First";return;}
			}
				
		int x=s.size()-1;
		if(x%2){cout<<"Second";}
		else cout<<"First";
	}
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
