#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << endl;
        }
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2) cout << 3 << " ";
            else cout << 2 << " ";
            for (int i = 1; i < (n / 2); i++) {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
};


// not correct for test cases

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k, x;
//         cin >> n >> k >> x;
//         vector<int> result;

//         for (int i = k; i > 0; i--) {
//             int total = n;
//             vector<int> ans;
//             for (int j = i; j > 0; j--) {
//                 if (x != j && total - j >= 0) {
//                     int times = total / j;
//                     total -= (times * j);
//                     cout << total << " " << times << endl;
//                     for (int x = 0; x < times; x++) ans.push_back(j);
//                 }
//                 if (total == 0) break;
//             }
//             if (total == 0) {
//                 result = ans;
//                 break;
//             }
//         }

//         if (result.size() == 0) {
//             cout << "NO" << endl;
//             continue;
//         }

//         cout << "YES" << endl;
//         cout << result.size() << endl;
//         for (int i = 0; i < result.size(); i++) {
//             cout << result[i] << " ";
//         }
//         cout << endl;
//     }    
//     return 0;
// }