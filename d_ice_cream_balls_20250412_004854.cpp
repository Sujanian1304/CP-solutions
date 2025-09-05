/*
 * Problem: D. Ice Cream Balls
 * URL: https://codeforces.com/contest/1862/problem/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <iostream>
#include <cmath>
using namespace std;
 void solve(){
	 unsigned long long n;
        cin >> n;
        unsigned long long x = (unsigned long long)((sqrt(8.0L*n + 1) + 1) / 2);
        if(n > x*(x+1)/2) {
            x++;
        }
        unsigned long long y = x*(x-1)/2;
        unsigned long long k = n - y;
        unsigned long long total_balls = x + k;
 
        cout << total_balls << "\n";
	}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
      solve();
    }
    return 0;
}
