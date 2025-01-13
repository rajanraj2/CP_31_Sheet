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
        int len = s.size();
        for (char &c : s) st.insert(c);

        for (char &c : x) {
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
        while (x.size() <= (2 * len)) {
            if (x.find(s) != string::npos) {
                flag = false;
                break;
            }
            x += x;
            count++;
        }
        
        if (!flag) cout << count << endl; 
        else if (x.find(s) != string::npos) cout << count << endl;
        else cout << -1 << endl;
    }    
    return 0;
}