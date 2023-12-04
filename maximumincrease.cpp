#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int res = 0, inc = 0;
    int prev = -1;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num > prev) {
            inc += 1;
            
        } else {
            inc = 1;
        }
        prev = num;
        res = max(res, inc);
    }
    cout << res;
    return 0;
}