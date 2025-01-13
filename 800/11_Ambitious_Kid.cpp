#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = INT_MAX;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        result = min(result, abs(arr[i] - 0));
    }
    
    cout << result << endl;
    return 0;
}