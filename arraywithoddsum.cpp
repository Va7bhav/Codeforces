#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int size; cin >> size;
        int countOdd = 0;
        for (int i = 0; i < size; i++) {
            int a; cin >> a;
            if (a % 2 != 0) {
                countOdd += 1;
            }
        }
        if (countOdd % 2 != 0) {
            cout << "YES" << endl;
        } else {
            if (countOdd == size || countOdd == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            
        }
    }
    return 0;
}