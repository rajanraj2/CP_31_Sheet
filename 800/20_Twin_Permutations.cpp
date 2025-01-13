#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), arr(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            arr[i] = i + 1;
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = arr.size() - 1; j >= 0; j--) {
                if (arr[j] + a[i] <= arr[0] + arr[i + 1]) {
                    b[i] = arr[j];
                    arr.erase(arr.begin() + j);
                    cout << "arr[j]: " << arr[j] << " " << j << endl;
                    break;
                }
            }
        }
        b[n - 1] = arr[0];

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }    
    return 0;
}