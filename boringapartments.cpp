#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int x; cin >> x;
        int digit = x % 10;
        int length = to_string(x).length();
        int res = 0;
        for (int i = 1; i < digit; i++) {
            res += 10;
        }
        for (int i = 0; i < length; i++) {
            res += (i + 1);
        }
        cout << res << endl;
    }
    return 0;
}