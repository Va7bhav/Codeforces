#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if ((n / 2) % 2 != 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            int i = 0;
            for (i = 0; i < n / 2; i++) {
                cout << (i + 1) * 2 << " ";
            }
            for (i = 0; i < ((n / 2) - 1); i++) {
                cout << (2*i + 1) << " ";
            }
            cout << (2 * (i + (n / 4))) + 1 << endl;
        }
    }
    return 0;
}