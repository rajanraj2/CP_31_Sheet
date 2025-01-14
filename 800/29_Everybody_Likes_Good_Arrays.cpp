#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 1, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i > 0) {
                if (arr[i] % 2 == arr[i-1] % 2) {
                    count++;
                }
                else {
                    ans += count - 1;
                    count = 1;
                }
            }
        }
        if (count > 1) ans += count - 1;
        cout << ans << endl;
        
    }    
    return 0;
}