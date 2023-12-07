#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll a, b, c; cin >> a >> b >> c;
    int total = (a + b) / c;
    int beforeTransfer = (a / c) + (b / c);
    if (beforeTransfer != total) {
        cout << (a + b) / c << " " << min(c - (a % c), c - (b % c));
    } else {
        cout << (a + b) / c << " " << 0;
    }

    

    return 0;
}