#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        string result = "";
        if (a > b) result = "First";
        else if (b > a) result = "Second";
        else {
            if (c % 2) result = "First";
            else result = "Second";
        }
        
        cout << result << endl;
    }    
    return 0;
}