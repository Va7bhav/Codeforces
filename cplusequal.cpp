#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int a, b, n; cin >> a >> b >> n;
        int op = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
                op += 1;
            } else {
                b += a;
                op += 1;
            }
        }
        cout << op << endl;
    } 
    return 0;
}