#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int ROWS, COLS;
    cin >> ROWS >> COLS;
    for (int i = 0; i < ROWS; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < COLS; j++) {
                cout << "#";
            }   
        } else {
            if (i % 4 == 1) {
                for (int j = 0; j < COLS - 1; j++) {
                    cout << ".";
                }
                cout << "#";
            } else {
                cout << "#";
                for (int j = 0; j < COLS - 1; j++) {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}