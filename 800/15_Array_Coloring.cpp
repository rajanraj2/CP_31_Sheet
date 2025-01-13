#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] & 1) odd++;
        }
        
        string result = "NO";
        if (n > 1 && odd % 2 == 0) result = "YES";   
        cout << result << endl;
    }    
    return 0;
}