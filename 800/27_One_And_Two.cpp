#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int two = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) two++;
        }
        int ans = -1;
        if (two % 2) {
            cout << ans << endl;
            continue;
        }
        else if (two == 0) {
            cout << 1 << endl;
            continue;
        }

        int count = two / 2;
        int i = 0;
        while (i < n && count) {
            if (arr[i] == 2) count--;
            i++;
        }
        cout << i << endl;
    }    
    return 0;
}