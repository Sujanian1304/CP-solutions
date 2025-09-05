/*
 * Problem: Incremental Game
 * URL: https://www.codechef.com/START187B/problems/INCGAME
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <bits/stdc++.h>
using namespace std;
bool win[21][21][21];  // x, y, last move

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

for (int p=20;p>=0;--p) {
    for (int x=0;x<=20;++x) {
        for (int y=0;y<=20;++y) {
            if (max(x,y)<=p) {
                win[x][y][p] = false;
            } else {
                bool w = false;
                for (int r=p+1;r<=x&&!w;++r)
                    if (!win[x-r][y][r])w=true;
                for (int r=p+1;r<=y&&!w;++r)
                    if (!win[x][y-r][r])w=true;
                win[x][y][p] = w;
            }
        }
    }
}


    int T;
    cin >> T;
    while(T--){
        int a,b,c;
        cin >>a>>b>>c;
        bool flag=0;
     for (int i=1;i<=min(c,a)&&!flag;++i)
        if (!win[a-i][b][i]) flag=1;
    for (int i=1;i<=min(c,b)&&!flag;++i)
        if (!win[a][b-i][i]) flag=1;
    cout<<(flag?"Alice\n":"Bob\n");
    }
    return 0;
}

   
