#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, n; cin >> x >> y >> n;
        if (y > (n % x)) {
            cout << ((n + (y - (n % x))) - x) << endl;
        } else if (y < (n % x)) {
            cout << (n - ((n % x) - y)) << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}