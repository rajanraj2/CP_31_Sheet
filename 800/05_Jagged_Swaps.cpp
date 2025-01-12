#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        string result = "YES";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i == 0 && arr[i] != 1)  result = "NO";
        }
        
        cout << result << endl;
    }    
    return 0;
}