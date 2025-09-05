/*
 * Problem: C1. Hacking Numbers (Easy Version)
 * URL: https://codeforces.com/contest/2109/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if(!(cin >> T)) return 0;
    while(T--){
        long long n;
        cin >> n;

        string reply;
        cout << "mul 9\n" << flush;
        cin >> reply;
        cout << "digit\n" << flush;
        cin >> reply;
        cout << "digit\n" << flush;
        cin >> reply;
        long long y = n - 9;
        cout << "add " << y << "\n" << flush;
        cin >> reply;
        cout << "!\n" << flush;
        cin >> reply;
        if(reply == "-1") 
            return 0;   
    }
    return 0;
}
