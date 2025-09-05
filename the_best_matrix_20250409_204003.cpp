/*
 * Problem: The Best Matrix
 * URL: https://www.codechef.com/START181D/problems/GOODMATRIX
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    
   
    int ans = N * M;  
    for (int v : {1, -1}) {
        for (int h : {1, -1}) {
            unordered_map<int, int> freq;
            int bestFreq = 0;
            for (int i = 0; i < N; i++){
                for (int j = 0; j < M; j++){
                    int p = A[i][j] - (v * i + h * j);
                    bestFreq = max(bestFreq, ++freq[p]);
                }
            }
            ans = min(ans, N * M - bestFreq);
        }
    }
    
    cout << ans << "\n";
}
    return 0;
}
