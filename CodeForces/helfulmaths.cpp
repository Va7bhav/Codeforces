#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ONE = 0, TWO = 0, THREE = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == '1') {
            ONE += 1;
        } else if (s[i] == '2') {
            TWO += 1;
        } else {
            THREE += 1;
        }
    }
    string res;
    for (int i = 0; i < ONE; i++) {
        res += ("1+");
    }
    for (int i = 0; i < TWO; i++) {
        res += ("2+");
    }
    for (int i = 0; i < THREE; i++) {
        res += ("3+");
    }

    for (int i = 0; i < res.length() - 1; i++) {
        cout << res[i];
    }
    return 0;
}