// https://codeforces.com/problemset/problem/1883/B


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        string result = "YES";
        int count = 0;
        unordered_map<char, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        for (auto it : mpp) {
            if (it.second % 2) {
                if (count == k + 1) {
                    result = "NO";
                    break;
                }
                count++;
            }
        }
        cout << result << endl;
    }    
    return 0;
}