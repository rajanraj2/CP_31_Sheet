#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = "YES";
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
            if (mpp.size() > 2) {
                result = "NO";
                break;
            }
        }

        if (result == "YES") {
            int i = 0, prev = 0, curr = 0;
            for (auto it : mpp) {
                i++;
                if (i == 1) prev = it.second;
                if (i == 2) curr = it.second;
            }
            if (i == 2 && abs(prev - curr) > 1) result = "NO";
        }

        cout << result << endl;
    }    
    return 0;
}