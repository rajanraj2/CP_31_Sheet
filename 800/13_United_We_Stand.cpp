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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> a, b;

        for (int i = 0; i < n; i++) {
            if (isDivisor(a, arr[i])) {
                b.push_back(arr[i]);
            } 
            else {
                a.push_back(arr[i]);
            }
        }
        

    }    
    return 0;
}