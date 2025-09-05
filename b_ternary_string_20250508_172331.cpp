/*
 * Problem: B. Ternary String
 * URL: https://codeforces.com/problemset/problem/1354/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    string s;cin>>s;
    int n=s.size();
    int cnt1=0;int cnt2=0;int cnt3=0;
    for(int i=0;i<n;i++){
		if(s[i]=='1') cnt1++;
		else if(s[i]=='2') cnt2++;
		else if(s[i]=='3') cnt3++;
	}
	if(cnt1==0||cnt2==0||cnt3==0){cout<<"0\n";return;}
	int tail=0;int head=-1;int ans=1e9;int a=0;int b=0;int c=0;
	while(tail<n){
		while(head+1<n&&(a<1||b<1||c<1)){
			if(s[head+1]=='1') a++;
		    else if(s[head+1]=='2') b++;
		    else if(s[head+1]=='3') c++;
		    if(a>0&&b>0&&c>0){head++;break;}
		    head++;
		}
		//cout<<head<<" "<<tail<<" ";
		if(a>0&&b>0&&c>0)ans=min(ans,head-tail+1);
		if(head<tail){
			tail++;
			head=tail-1;
		}else{
			if(s[tail]=='1') a--;
		    else if(s[tail]=='2') b--;
		    else if(s[tail]=='3') c--;
		    tail++;
		}
	}
	cout<<ans<<"\n";
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
