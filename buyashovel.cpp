#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, r; cin >> k >> r;
    int res = 1;
    while (true) {
        if ((k * res) % 10 == 0) {
            break;
        } 
        if ((k * res) % 10 == r) {
            break;
        }
        res += 1;
    }
    cout << res << endl;
    return 0;
}