#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        string result = "";
        if (n % 3 == 0) result = "Second";
        else result = "First";

        cout << result << endl;
    }    
    return 0;
}