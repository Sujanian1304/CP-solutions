/*
 * Problem: B. Serval and Final MEX
 * URL: https://codeforces.com/contest/2085/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */
 #include <vector>
#include <iostream>
using namespace std;

int mex(const vector<int>& arr) {
    vector<bool> present(arr.size() + 1, false);
    for (int num : arr) {
        if (num <= arr.size()) present[num] = true;
    }
    for (int i = 0; ; ++i) {
        if (!present[i]) return i;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        vector<pair<int, int>> ops;

        while (a.size() > 1) {
            int current_mex = mex(a);
            if (current_mex == 0) {
                ops.push_back({1, (int)a.size()});
                break;
            }

            bool found = false;
            int mergeL = -1, mergeR = -1;

            // Look for consecutive zeros of length >= 2
            for (int i = 0; i < a.size(); ) {
                if (a[i] == 0) {
                    int j = i;
                    while (j < a.size() && a[j] == 0) j++;
                    if (j - i >= 2) {
                        mergeL = i + 1; // 1-based
                        mergeR = j;     // 1-based (exclusive in 0-based, so j becomes mergeR)
                        found = true;
                        break;
                    }
                    i = j;
                } else {
                    i++;
                }
            }

            if (!found) {
                // Look for consecutive same non-zero elements of length >= 2
                for (int i = 0; i < a.size(); ) {
                    if (a[i] != 0) {
                        int current_val = a[i];
                        int j = i;
                        while (j < a.size() && a[j] == current_val) j++;
                        if (j - i >= 2) {
                            mergeL = i + 1;
                            mergeR = j;
                            found = true;
                            break;
                        }
                        i = j;
                    } else {
                        i++;
                    }
                }
            }

            if (!found) {
                // Merge first two elements
                mergeL = 1;
                mergeR = 2;
            }

            // Apply the merge operation
            vector<int> new_a;
            new_a.reserve(a.size() - (mergeR - mergeL));
            for (int i = 0; i < mergeL - 1; ++i) {
                new_a.push_back(a[i]);
            }
            vector<int> sub(a.begin() + mergeL - 1, a.begin() + mergeR);
            int m = mex(sub);
            new_a.push_back(m);
            for (int i = mergeR; i < a.size(); ++i) {
                new_a.push_back(a[i]);
            }
            a = new_a;
            ops.push_back({mergeL, mergeR});
        }

        // Output the operations
        cout << ops.size() << endl;
        for (auto &p : ops) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}
