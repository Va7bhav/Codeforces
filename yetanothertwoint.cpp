#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        if (b < a) swap(a, b);
        // b is bigger than a
        if ((b - a) % 10 == 0) cout << ((b - a) / 10) << endl;
        else cout << ((b - a) / 10) + 1 << endl;
    }
    return 0;
}