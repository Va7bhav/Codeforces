#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int countZeroes = 0, countOnes = 0;
        if (s[n - 1] == '0') countZeroes += 1;
        if (s[n - 1] == '1') countOnes += 1;

        int flag = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '1') {
                countOnes += 1;
            } else {
                countZeroes += 1;
            }
            if (s[i] != s[i + 1]) {
                flag = 1;
            }
        }
        if (flag == 1) {
            cout << "YES" << endl;
            continue;
        }
        else {
            if (countZeroes > countOnes) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}