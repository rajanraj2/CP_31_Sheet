#include <bits/stdc++.h>
using namespace std;

int points_check() {
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int result = 0;
        vector<vector<char>> grid(10, vector<int>(10));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == 'X') {
                    result += points_check(i, j);
                }
            }
        }
        cout << result << endl;
    }    
    return 0;
}