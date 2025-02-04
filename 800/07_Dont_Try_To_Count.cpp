#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        bool flag = true;
        set<char> st;
        int xlen = x.size();
        int len = s.size();
        for (char &c : x) st.insert(c);

        for (char &c : s) {
            if (st.count(c) == 0) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << - 1 << endl;
            continue;
        }

        int count = 0;
        while (x.size() <= xlen + (2 * len)) {
            if (x.find(s) != string::npos) {
                flag = false;
                break;
            }
            x += x;
            count++;
        }
        
        if (x.find(s) != string::npos) cout << count << endl;
        else cout << -1 << endl;
    }    
    return 0;
}