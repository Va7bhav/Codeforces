#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        // a is the smaller side
        if (2 * a > b) {
            cout << (4 * a * a) << endl;
        } else {
            cout << (b * b) << endl;
        }
        
    }
    return 0;
}