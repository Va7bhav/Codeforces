#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        int left = 0, right = s.length() - 1;
        while (s[left] != '1' && left < s.length()) {
            left += 1;
        }
        while (s[right] != '1' && right >= 0) {
            right -= 1;
        }
        if (left >= right) {
            cout << 0 << endl;
        } else {
            int countZeroes = 0;
            for (int i = left; i <= right; i++) {
                if (s[i] == '0') {
                    countZeroes += 1;
                }
            }
            cout << countZeroes << endl;
        }
    }
    return 0;
}