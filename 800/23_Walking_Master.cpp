#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) {
            cout << -1 << endl;
            continue;
        }

        int y = abs(b - d);
        int x = a + y;

        if (c > x) {
            cout << -1 << endl;
            continue;
        }
        
        int ans = x - c + y;
        cout << ans << endl;
    }    
    return 0;
}