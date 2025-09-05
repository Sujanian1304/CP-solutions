/*
 * Problem: Creature Hunter
 * URL: https://www.codechef.com/START185C/problems/CREAHUN
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    // Your solution here
     int n,h;cin>>n>>h;
     int ma1=0;int ma2=0;
     for(int i=0;i<n;i++){
		 int a,b;cin>>a>>b;
		 if(a==1) ma1=max(ma1,b);
		 else ma2=max(ma2,b);
	 }
	 int ans=0;
	 if(ma1==0){
		 ans+=(h+ma2-1)/ma2;
		 cout<<ans*2<<"\n";return;
	 }
	 if(ma2==0){
		 ans+=(h+ma1-1)/ma1;
		 cout<<ans<<"\n";return;
	 }
	 if(ma1>=h){cout<<1<<"\n";return;}
	 if(ma2>=h){cout<<2<<"\n";return;}
	 while(h>0){
		 if(ma1>=h){ans+=1;break;}
		 if(ma2>=h){ans+=2;break;}
		int x=h/ma1;int y=h/ma2;
		if(x<=2*y){h-=ma1*x;ans+=x;}
		else {h-=ma2*y;ans+=2*y;}
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
