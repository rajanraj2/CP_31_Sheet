#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxi = 0, prev = 0;
        for (int i = 0; i < n; i++) {
            int val = arr[i] - prev;
            maxi = max(maxi, val);
            prev = arr[i];
        }
        int val = 2 * (x - prev);
        maxi = max(maxi, val);
        
        cout << maxi << endl;
    }    
    return 0;
}