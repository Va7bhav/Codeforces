#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 1 || n == 2) cout << 1 << endl;
        else {
            cout << ((n - 1) / 2) + 1 << endl;
        }
    }
    return 0;
}