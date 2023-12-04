#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        if (n == 1 || n == 2) {
            cout << 1 << endl;
            continue;
        }
        cout << ceil((n - 2) / (1.0 * x)) + 1 << endl;
        
    }
    return 0;
}