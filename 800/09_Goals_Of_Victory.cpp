#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        int total_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> arr[i];
            total_sum += arr[i];
        }
        total_sum *= -1;
        cout << total_sum << endl;
        
    }    
    return 0;
}