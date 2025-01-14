#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        string result = "NO";
        int diff = n - k;
        if (n % 2 == 0 || n % k == 0 || n % (k + 2) == 0) result = "YES";
        else if (diff >= 0 && diff % 2 == 0) result = "YES";
        cout << result << endl;
    }    
    return 0;
}