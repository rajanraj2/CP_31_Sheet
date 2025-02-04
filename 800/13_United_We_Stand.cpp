#include <bits/stdc++.h>
using namespace std;

bool isDivisor(vector<int> &a, int num) {
    for (auto &it : a) {
        if (it % num == 0) return true;
    } 
    return false;
}

// use lcm hcf

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mpp;
        vector<int> a, b;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
            mini = min(mini, arr[i]);
        }
        
        if (mpp.size() <= 1) {
            cout << -1 << endl;
            continue;
        }

        for (auto it : mpp) {
            if (it.first == mini) {
                for (int i = 0; i < it.second; i++) a.push_back(it.first);
            }
            else {
                for (int i = 0; i < it.second; i++) b.push_back(it.first);
            }
        }

        cout << a.size() << " " << b.size() << endl;
        for (auto it : a) cout << it << " ";
        cout << endl;
        for (auto it : b) cout << it << " ";
        cout << endl;

    }    
    return 0;
}