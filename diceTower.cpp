#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        long pips; cin >> pips;
        
        if (pips > 14 && 1 <= (pips % 14) && (pips % 14) <= 6) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}