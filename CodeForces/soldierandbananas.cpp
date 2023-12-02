#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w; cin >> k >> n >> w;
    int i = 1;
    while (w--) {
        n -= (i * k);
        i += 1;
    }
    if (n >= 0) {
        cout << 0; 
    } else {
        cout << abs(n);
    }
    return 0;
}