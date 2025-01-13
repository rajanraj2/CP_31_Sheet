#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        string result = "NO";

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == k) result = "YES";
        }
        cout << result << endl;
    }    
    return 0;
}