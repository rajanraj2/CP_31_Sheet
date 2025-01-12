#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0, total = 0;
        bool flag = false;
        for (char &c : s) {
            if (c == '.') {
                count++;
                total++;
                if (count >= 3) flag = true;
            }
            else {
                count = 0;
            }
        }

        int result = 0;
        if (total == 0) result = 0;
        else if (flag) result = 2;
        else result = total;

        cout << result << endl; 
    }    
    return 0;
}