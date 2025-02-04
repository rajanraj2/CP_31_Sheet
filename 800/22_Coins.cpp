#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        string result = "NO";
        if (n % 2 == 0) result = "YES";
        else if (k % 2 == 1 && k <= n) result = "YES";
        cout << result << endl;
    }    
    return 0;
}