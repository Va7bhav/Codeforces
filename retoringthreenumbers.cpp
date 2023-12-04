#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, l; cin >> i >> j >> k >> l;

    int m = max({i, j, k, l});
    if (i == m) {
        cout << i - j << " " << i - k << " " << i - l;
    } else if (j == m) {
        cout << j - i << " " << j - k << " " << j - l;
    } else if (k == m) {
        cout << k - i << " " << k - j << " " << k - l;
    } else {
        cout << l - i << " " << l - j << " " << l - k;
    }
    return 0;
}