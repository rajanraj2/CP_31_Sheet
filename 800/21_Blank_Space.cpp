#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0, result = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) count++;
            else count = 0;
            result = max(result, count);
        }
        cout << result << endl;
    }    
    return 0;
}