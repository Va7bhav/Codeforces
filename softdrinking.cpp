#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, dp, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toasts1 = (k * l) / nl;
    int toasts2 = (c * d);
    int toasts3 = (p / np);
    cout << (min({toasts1, toasts2, toasts3}) / n);


    return 0;
}