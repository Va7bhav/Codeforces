#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int a, b, n; cin >> a >> b >> n;
        int op = 0;
        if (a > b) {
            while (b < n) {
                op += 1;
                b += a;
            }
        } else {
            while (a < n) {
                op += 1;
                a += b;
            }
        }
        cout << op << endl;
    } 
    return 0;
}