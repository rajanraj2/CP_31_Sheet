#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        int prev;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i == 0) prev = arr[i];
            if (i > 0 && prev != arr[i]) flag = false; 
            prev = arr[i];
        }
        if (flag && n > 1) {
            cout << "NO" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        if (n == 1) {
            cout << "YES" << endl;
            cout << arr[0] << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << arr[n - 1] << " " << arr[0] << " ";
        for (int i = 1; i < n - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }    
    return 0;
}