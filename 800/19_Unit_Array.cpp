// https://codeforces.com/problemset/problem/1834/A
// Unit Array


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int minus = 0, plus = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) plus++;
            else minus++;
        }

        int ans = 0;
        if (plus >= minus) {
            if (minus % 2) ans = 1;
            cout << ans << endl;
            continue;
        }

        int diff = minus - plus;
        ans = (diff + 1) / 2;
        if ((minus - ans) % 2) ans++;
        cout << ans << endl;
    }    
    return 0;
}