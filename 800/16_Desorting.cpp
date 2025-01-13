#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mini = INT_MAX;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i > 0) mini = min(mini, arr[i] - arr[i - 1]);
        }
        
        int count = 0;
        if (mini < 0) count = 0;
        else {
            if (mini % 2) count = (mini + 1) / 2;
            else count = (mini / 2) + 1;
        }
        cout << count << endl;
    }    
    return 0;
}