#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i > 0 && arr[i] < arr[i - 1]) flag = false;
        }

        string result = "YES";
        if ((flag)) {
            cout << result << endl;
            continue;
        }

        if (k == 1) result = "NO";
        
        cout << result << endl;
    }
    return 0;
}